
#include <list>
#include <string>
#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
using namespace std;

ifstream kern; 
bool cover(string el1,string el2)
 {int i,j,k;
  if(el1.length()==el2.length())return false;
  if(el1.length()>el2.length())return(false);
  i=0;j=0;
  while(i<el1.length())
  {if(el1[i]==el2[j])
     {i++;j++;if(i==el1.length())return true;if(j>=el2.length())return false;}
   else{j++;if(j>=el2.length())return false;}
  }
  return true;
 }
int order(string el1,string el2)
 {int i;
  if(el1.length()>el2.length())return 1;
  if(el1.length()<el2.length())return 2;
  i=0;
  while(i<el1.length())
  {if(el1[i]==el2[i])i++;
   else if(el1[i]<el2[i])return 2;
   else return 1;
  }
  return 0;
 }
main(int argc, char *argv[])
{string p,ms,pref,prefms,mm,m10,mM,md,s;int m,k,nn,nd,no,l,i,j;
bool fin; char c;
list<string> foundM,found10;
list<string>::iterator itM,it10,fitM,fit10;
for(k=1;k<argc;k++)
{ms=argv[k];m=atoi(argv[k]);
pref="kernel"; prefms=pref+ms;
kern.open(prefms.c_str());
cout<<"M:="<<m<<":A:=10:C:=12:E:=14:F:=15:\n";
nn=0;nd=0;no=0;
while(kern>>p)
{nn++;l=p.length();
 if(p[0]!='"'){cerr<<"probl�me de quote � la ligne"<<nn; }
 if(p[l-1]!=','){cerr<<"probl�me de , � la ligne"<<nn; }
 for(i=1;i<l;i++)if(p[i]=='"')
                   {mm=p.substr(1,i-1);m10=p.substr(i+2,l-i-3);break;}
 if((nn>1)&&(order(found10.back(),m10)!=2))
   {no++;//cerr<<"probl�me d'ordre � la ligne"<<nn;
    itM=foundM.begin();it10=found10.begin();
    while(order(*it10,m10)==2){it10++;itM++;}
    if(order(*it10,m10)==1){foundM.insert(itM,mm);found10.insert(it10,m10);}
   }
  else{foundM.push_back(mm);found10.push_back(m10);}
}
nn==0;it10=found10.begin();itM=foundM.begin();
while(itM!=foundM.end())
 {fitM=itM;fit10=it10;fitM++;fit10++;
  while(fitM!=foundM.end())
       {if(cover(*itM,*fitM))
          {nd++; //cerr<<*itM<<" domine "<<*fitM<<"\n";
           fitM=foundM.erase(fitM);fit10=found10.erase(fit10);}
        else{fitM++;fit10++;}
       }
  itM++;it10++;
 }
itM=foundM.begin();it10=found10.begin();
cerr<<"taille des listes: "<<foundM.size()<<","<<found10.size()<<"\n";
it10=found10.begin();itM=foundM.begin();
while(itM!=foundM.end())
 {mM="0";for(i=0;i<(*itM).length();i++)
   {c=(*itM)[i];if((c>='0')&&(c<='9'))s=c; else {s='0'+(10+c-'A')/10;c='0'+(10+c-'A')%10;s=s+c;};mM="("+mM+")*M+"+s;} md=*it10; 
  cout<<"[iszero("<<mM<<"-"<<md<<"),isprime("<<mM<<"),"<<mM<<","<<md<<"];\n";
  itM++;it10++;
 }
cerr<<" on a eu "<<no<<" probl�mes d'ordre et "<<nd<<" probl�mes de dominance";
}} // fin main

