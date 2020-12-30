Data for minimal primes, left-truncatable primes, right-truncatable primes, minimal composites, and two-sided primes in bases 2 to 160 (not for left-truncatable composites and right-truncatable composites, since there are infinitely many such numbers)

The name of the files means:

"kernel n": data for minimal primes (https://primes.utm.edu/glossary/page.php?sort=MinimalPrime, https://oeis.org/A071062) in base n

"left n": unsolved families for minimal primes in base n (format: x{y}z = xyyy...yyyz, where x,y,z are strings of digits) (the test limits are all length 10000, unless higher test limits shown) (files only for n<=50, if there is no file for n (n<=50), then means that all minimal (probable) primes in base n are known)

"ltp n": data for left-truncatable primes (https://primes.utm.edu/glossary/page.php?sort=LeftTruncatablePrime, https://oeis.org/A024785) in base n

"mc n": data for minimal composites (https://oeis.org/A071070) in base n

"rtp n": data for right-truncatable primes (https://primes.utm.edu/glossary/page.php?sort=RightTruncatablePrime, https://oeis.org/A024770) in base n

"twoside n": data for two-sided primes (both left-truncatable and right-truncatable) in base n

The "program of minimal.txt", "program of ltp.txt", "program of rtp.txt", and "program of two sides" files in the "code" folder are PARI/GP codes of (minimal primes, left-truncatable primes, right-truncatable primes, two-sided primes) in fixed base, just enter "cc(b,z.txt)" to write all (minimal primes, left-truncatable primes, right-truncatable primes, two-sided primes) in base b to the text file "z.txt"

Digit notation:

0-9 for digits 0-9

A-Z for digits 10-35

a-z for digits 36-61

ASCII 33-47 for digits 62-76

ASCII 58-64 for digits 77-83

ASCII 91-96 for digits 84-89

ASCII 123-126 for digits 90-93

Extended ASCII 161-255 for digits 94-188

See the mersenneforum page https://mersenneforum.org/showthread.php?t=26159 for the list of these three types of primes and many other types of primes in bases 2<=n<=36

More information of minimal primes in base n: https://cs.uwaterloo.ca/~cbright/reports/mepn.pdf, https://scholar.colorado.edu/downloads/hh63sw661, https://cs.uwaterloo.ca/~cbright/talks/minimal-slides.pdf, https://www.primepuzzles.net/puzzles/puzz_178.htm

More information of left-truncatable primes in base n: http://chesswanks.com/num/LTPs/, http://www.primerecords.dk/left-truncatable.htm, https://rosettacode.org/wiki/Find_largest_left_truncatable_prime_in_a_given_base, https://gist.github.com/barak/5157964

More information of right-truncatable primes in base n: http://fatphil.org/maths/rtp/rtp.html

The bases such that all minimal primes are known are 2-16, 18, 20, 22-24, 30, 42, 60 (bases 13 and 23 need primality proving of probable primes)

The bases such that all left-truncatable primes are known are 2-29, 31-35, 37-39, 41, 43, 47, 49, 51, 53, 55, 59, 61, 65, 67, 71, 73, 79, 83, 89

The bases such that all right-truncatable primes are known are 2-100 and possible higher bases

The bases such that all two-sided primes are known are 2-100 and possible higher bases

Notes: 

* Since I don't know how to run the programs of minimal primes by Curtis Bright and Raymond Devillers, I only use PARI/GP program and only give the minimal primes < 2^32 (for bases >= 51, since bases 2 to 30 already have data by Curtis Bright, and bases 28 to 50 already have data by Raymond Devillers)

* Since bases 18, 20, 22, 24, 26, 28, 30, 32-36, 38+ have too many left-truncatable primes and thus PARI/GP cannot hold, the text files only have the left-truncatable primes < 2^32

Largest minimal prime in base n written in base 10 for 2<=n<=36: (https://oeis.org/A326609)

3, 13, 5, 3121, 5209, 2801, 76695841, 811, 66600049, 29156193474041220857161146715104735751776055777, 388177921, 13^32020\*8+183, 105424857819287798806418819113233738918727566030978473259776662287591943095417282958456246916612161, 436635814641280043127962407363407208906111673434962498607709751248805460292422544779495998033626489944124062146459306989397233, 16^3544\*9+145, ?, 249069897374447078426903207266791381270529, ?, (20^449\*16-2809)/19, ?, 22^763\*20+7041, (23^800873\*106-7)/11, 973767003942195520947294504280890002680537875404412883659428819153939518991719953852457999342229586282557076411687300474817686178175693329, ?, ?, ?, ?, ?, 30^1023\*12+1, ?, ?, ?, ?, ?, ?

Largest minimal prime in base n written in base n for 2<=n<=36:

11, 111, 11, 44441, 40041, 11111, 444444441, 1101, 66600049, 444444444444444444444444444444444444444444441, AA000001, 8(0)\_{32017}111, 40000000000000000000000000000000000000000000000000000000000000000000000000000000000049, 96666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666608, 9(0)\_{3542}91, ?, GG0000000000000000000000000000001, ?, (G)\_{447}99, ?, K(0)\_{760}EC1, 9(E)\_{800873}, M666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666661, ?, ?, ?, ?, ?, C(0)\_{1022}1, ?, ?, ?, ?, ?, ?

Length of largest minimal prime in base n for 2<=n<=36: (https://oeis.org/A330049)

2, 3, 2, 5, 5, 5, 9, 4, 8, 45, 8, 32021, 86, 107, 3545, (≥111334), 33, (≥110986), 449, (≥479150), 764, 800874, 100, (≥136967), (≥8773), (≥109006), (≥94538), (≥174240), 1024, (≥9896), (≥9750), (≥9961), (≥9377), (≥9599), (≥3935)

Number of minimal primes in base n for 2<=n<=36: (assuming the conjecture in https://mersenneforum.org/showpost.php?p=529838&postcount=675 is true) (https://oeis.org/A330048)

2, 3, 3, 8, 7, 9, 15, 12, 26, 152, 17, 228, 240, 100, 483, 1280, 50, 3463, 651, 2601, 1242, 6021, 306, (17608 or 17609), 5664, 17215, 5784, (57296 or 57297), 220, (79199 ~ 79206), (45266 ~ 45283), (57708 or 57709), (56487 ~ 56490), (182392 or 182393), 6297

Largest left-truncatable prime in base n written in base 10 for 3<=n<=36: (since no such primes exist for base 2) (https://oeis.org/A103443)

23, 4091, 7817, 4836525320399, 817337, 14005650767869, 1676456897, 357686312646216567629137, 2276005673, 13092430647736190817303130065827539, 812751503, 615419590422100474355767356763, 34068645705927662447286191, 1088303707153521644968345559987, 13563641583101, 571933398724668544269594979167602382822769202133808087, 546207129080421139, 1073289911449776273800623217566610940096241078373, 391461911766647707547123429659688417, 33389741556593821170176571348673618833349516314271, 116516557991412919458949, 10594160686143126162708955915379656211582267119948391137176997290182218433, 8211352191239976819943978913, 12399758424125504545829668298375903748028704243943878467, 10681632250257028944950166363832301357693, 720639908748666454129676051084863753107043032053999738835994276213, 4300289072819254369986567661, ?, 645157007060845985903112107793191, 1131569863270120248974817136287838489359936416046975582122661310411, 924039815258046855588818237912726885772934968646554431, 982498935397824993800810311994840611581693708091339679644860318739434026149, 448739985000415097566502155600731235704288431019152509, ?

Largest left-truncatable prime in base n written in base n for 3<=n<=36: (since no such primes exist for base 2)

212, 333323, 222232, 14141511414451435, 6642623, 313636165537775, 4284484465, 357686312646216567629137, A68822827, 471A34A164259BA16B324AB8A32B7817, CC4C8C65, D967CCD63388522619883A7D23, 6C6C2CE2CEEEA4826E642B, DBC7FBA24FE6AEC462ABF63B3, 6C66CC4CC83, AF93E41A586HE75A7HHAAB7HE12FG79992GA7741B3D, CIEG86GCEA2C6H, FC777G3CG1FIDI9I31IE5FFB379C7A3F6EFID, G8AGG2GCA8CAK4K68GEA4G2K22H, FFHALC8JFB9JKA2AH9FAB4I9L5I9L3GF8D5L5, IMMGM6C6IMCI66A4H, HMJEJFA3A71DID9MFMNFE3D3KJHA61KH92IFCA3LB8GF444FBB7AH, ME6OM6OECGCC24C6EG6D, L2K853AC9IC628859L93F7FLAM7L25EN3C3PC27, O2AKK6EKG844KAIA4MACK6C2ECAB, 5C9126C3PN6IRP5FPBMKA5LGBMO387R5IJLO54OFBFJL85, KCG66AGSCKEIASMCKKJ, ?, UUAUIKUC4UI6OCECI642SD, LFLHKUDGSP39SAAPAD9I9OLIOUOH6GV68OR8UMJ6LRUB, 6ISWQOIMIWC8OKQAIMKUQ24KO86WK2ASCEC5, U9WSWU4T672RCMFESU6B6FG99UNABPFOU2LIIUGTX1KABJBPV, E8KUSUKKQEQWEWCMIEOY46Q8888QOSAAYOJ, ?

Length of largest left-truncatable prime in base n for 3<=n<=36: (since no such primes exist for base 2) (https://oeis.org/A103463)

3, 6, 6, 17, 7, 15, 10, 24, 9, 32, 8, 26, 22, 25, 11, 43, 14, 37, 27, 37, 17, 53, 20, 39, 28, 46, 19, (about 82 in theory), 22, 44, 36, 49, 35, (about 76 in theory)

Number of left-truncatable primes in base n for 2<=n<=36: (https://oeis.org/A076623)

0, 3, 16, 15, 454, 22, 446, 108, 4260, 75, 170053, 100, 34393, 9357, 27982, 362, 14979714, 685, 3062899, 59131, 1599447, 1372, 1052029701, 10484, 7028048, 98336, 69058060, 3926, (about 16844070429770 in theory), 11314, 35007483, 2527304, 240423316, 607905, (about 1631331033450 in theory)

Largest right-truncatable prime in base n written in base 10 for 3<=n<=36: (since no such primes exist for base 2) (https://oeis.org/A023107)

71, 191, 2437, 108863, 6841, 4497359, 1355840309, 73939133, 6774006887, 18704078369, 122311273757, 6525460043032393259, 927920056668659, 16778492037124607, 4928397730238375565449, 5228233855704101657, 3013357583408354653, 1437849529085279949589, 101721177350595997080671, 185720479816277907890970001, 158208158913013692383, 192747244030905257036482742599289, 11360039924980123824119977, 522764314648992960422987767, 106521223483392113109841556843, 467437774672035454997088263971, 18980691336146397055451904000521, 206971354022501468249535515240921, 403878995374635723531460715056361, 9813093725765026702961210138094949, 10174889780995609522983172669668593, 18085876810004448001794542893991790487, 9520817609816167868579578513867491007, 8723727825272063982605771015871962141

Largest right-truncatable prime in base n written in base n for 3<=n<=36: (since no such primes exist for base 2)

2122, 2333, 34222, 2155555, 25642, 21117717, 3444224222, 73939133, 29668286AA, 375BB5B515, B6C2CA8A8A, 2DD35B9D399395B3D, 72424E42EEE8E, 3B9BF319BD51FF, 5G4CEE8EC688CAC86G, DH17HB7BBD75BDB, 3EC8GI8GICIEG8C, 23HBH9D19HH9JDDJ9, 3824A4GGA4AG82KKA8, 5H975FFLLJF3HL3F33F3, DEK6ICCE8EE2K26, 3B5J511H5NJNN55B7JDBNN7H, JCMIIIEIIOIC4EIGO2, HJ1FHN97JF9P7PFFJ19, 2DMMKQEMAM4884QMAEAG2, 5953R9JHJ5PFF3R3H3D9N, 3K6QOO6682O4AG4GG6Q82C, JNHJ77DDNT7THDD177HD7B, JC642UIS2S8GOQUSKMII2A, 7HT59VF3PDRRJ7PD3371RB5, 3WEK8QAGQW8GW4E4KWGEAA2, 35X5FPF5R7XBXD9LRB1BRXXVT, T6CGG4G68I4MC26GCOYYCWCC, DZJZJPDDP7J55ZNPPZ71PD7H

Length of largest right-truncatable prime in base n for 3<=n<=36: (since no such primes exist for base 2) (https://oeis.org/A103483)

4, 4, 5, 7, 5, 8, 10, 8, 10, 10, 10, 17, 13, 14, 18, 15, 15, 17, 18, 20, 15, 24, 18, 19, 21, 21, 22, 22, 22, 23, 23, 25, 24, 24

Number of right-truncatable primes in base n for 2<=n<=36: (https://oeis.org/A076586)

0, 4, 7, 14, 36, 19, 68, 68, 83, 89, 179, 176, 439, 373, 414, 473, 839, 1010, 1577, 2271, 2848, 1762, 3376, 5913, 6795, 6352, 10319, 5866, 14639, 13303, 19439, 29982, 38956, 39323, 58857

Largest minimal composite in base n written in base 10 for 2<=n<=36:

15, 9, 21, 27, 475, 49, 477, 70, 731, 123, 8797, 169, 1529, 208, 2899, 291, 99491, 361, 5423, 418, 9275, 529, 30995, 598, 15645, 644, 18511, 843, 795037, 961, 23779, 1054, 34311, 1116, 56129

Largest minimal composite in base n written in base n for 2<=n<=36:

1111, 100, 111, 102, 2111, 100, 735, 77, 731, 102, 5111, 100, 7B3, DD, B53, 102, H115, 100, DB3, JJ, J3D, 100, 25JB, NN, N3J, NN, NH3, 102, TDB7, 100, N73, VV, TN5, VV, 17B5

Length of largest minimal composite in base n for 2<=n<=36:

4, 3, 3, 3, 4, 3, 3, 2, 3, 3, 4, 3, 3, 2, 3, 3, 4, 3, 3, 2, 3, 3, 4, 2, 3, 2, 3, 3, 4, 3, 3, 2, 3, 2, 4

Number of minimal composites in base n for 2<=n<=36: (https://oeis.org/A327282)

3, 4, 9, 10, 19, 18, 26, 28, 32, 32, 46, 43, 52, 54, 60, 60, 95, 77, 87, 90, 94, 97, 137, 117, 111, 115, 131, 123, 207, 147, 160, 163, 201, 169, 216

Largest two-sided prime in base n written in base 10 for 3<=n<=36: (since no such primes exist for base 2) (https://oeis.org/A323137)

23, 11, 67, 839, 37, 1867, 173, 739397, 79, 105691, 379, 37573, 647, 3389, 631, 202715129, 211, 155863, 1283, 787817, 439, 109893629, 577, 4195880189, 1811, 14474071, 379, 21335388527, 2203, 1043557, 2939, 42741029, 2767, 50764713107

Largest two-sided prime in base n written in base n for 3<=n<=36: (since no such primes exist for base 2)

212, 23, 232, 3515, 52, 3513, 212, 739397, 72, 511B7, 232, D99B, 2D2, D3D, 232, 5H511HB, B2, J9D3, 2J2, 37LFJ, J2, DJ5BD5, N2, DF3LL97, 2D2, NF9N3, D2, T7TTH7H, 292, VR35, 2N2, VXF73, 292, NBJZZBN

Length of largest two-sided prime in base n for 3<=n<=36: (since no such primes exist for base 2)

3, 2, 3, 4, 2, 4, 3, 6, 2, 5, 3, 4, 3, 3, 3, 7, 2, 4, 3, 5, 2, 6, 2, 7, 3, 5, 2, 7, 3, 4, 3, 5, 3, 7

Number of two-sided primes in base n for 2<=n<=36: (https://oeis.org/A323390)

0, 2, 3, 5, 9, 7, 22, 8, 15, 6, 35, 11, 37, 17, 22, 12, 69, 12, 68, 18, 44, 13, 145, 16, 47, 20, 77, 13, 291, 15, 89, 27, 74, 20, 241
