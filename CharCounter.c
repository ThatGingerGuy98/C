/#include <stdio.h>
#include <string.h>
int main()
{
  int ch;
  char userFile[255];
  unsigned long totalChars = 0;
  unsigned long a = 0; unsigned long b = 0; unsigned long c = 0; unsigned long d = 0; unsigned long e = 0; unsigned long f = 0; unsigned long g = 0; unsigned long h = 0; unsigned long i = 0; unsigned long j = 0; unsigned long k = 0; unsigned long l = 0; unsigned long m = 0; unsigned long n = 0; unsigned long o = 0; unsigned long p = 0; unsigned long q = 0; unsigned long r = 0; unsigned long s = 0; unsigned long t = 0; unsigned long u = 0; unsigned long v = 0; unsigned long w = 0; unsigned long x = 0; unsigned long y = 0; unsigned long z = 0; unsigned long A = 0; unsigned long B = 0; unsigned long C = 0; unsigned long D = 0; unsigned long E = 0; unsigned long F = 0; unsigned long G = 0; unsigned long H = 0; unsigned long I = 0; unsigned long J = 0; unsigned long K = 0; unsigned long L = 0; unsigned long M = 0; unsigned long N = 0; unsigned long O = 0; unsigned long P = 0; unsigned long Q = 0; unsigned long R = 0; unsigned long S = 0; unsigned long T = 0; unsigned long U = 0; unsigned long V = 0; unsigned long W = 0; unsigned long X = 0; unsigned long Y = 0; unsigned long Z = 0; unsigned long one = 0; unsigned long two = 0; unsigned long three = 0; unsigned long four = 0; unsigned long five = 0; unsigned long six = 0; unsigned long seven = 0; unsigned long eight = 0; unsigned long nine = 0; unsigned long zero = 0; unsigned long backTick = 0; unsigned long tilde = 0; unsigned long bang = 0; unsigned long at = 0; unsigned long hash = 0; unsigned long doller = 0; unsigned long percent = 0; unsigned long carrot = 0; unsigned long ampersna = 0; unsigned long splat = 0; unsigned long openPer = 0; unsigned long closePer = 0; unsigned long minus = 0; unsigned long underscore = 0; unsigned long equal = 0; unsigned long plus = 0; unsigned long openBra = 0; unsigned long openCur = 0; unsigned long closeBra = 0; unsigned long closeCur = 0; unsigned long forwardSlash = 0; unsigned long pipe = 0; unsigned long semicolon = 0; unsigned long colon = 0; unsigned long singleQuote = 0; unsigned long doubleQuote = 0; unsigned long comma = 0; unsigned long greaterThan = 0; unsigned long period = 0; unsigned long lessThan = 0; unsigned long backSlash = 0; unsigned long questionMark = 0; unsigned long space = 0;  //to hold number of appearances.
  printf("Please give the absolute path of the file to be read, with no quotes: "); gets (userFile);
  FILE *fp;
  fp = fopen(userFile, "r");
  while ( (ch=fgetc(fp)) != EOF )
  {
    totalChars++;
    switch (ch)
    {
      case 'a':
        a++;
        break;
      case 'b':
        b++;
        break;
      case 'c':
        c++;
        break;
      case 'd':
        d++;
        break;
      case 'e':
        e++;
        break;
      case 'f':
        f++;
        break;
      case 'g':
        g++;
        break;
      case 'h':
        h++;
        break;
      case 'i':
        i++;
        break;
      case 'j':
        j++;
        break;
      case 'k':
        k++;
        break;
      case 'l':
        l++;
        break;
      case 'm':
        m++;
        break;
      case 'n':
        n++;
        break;
      case 'o':
        o++;
        break;
      case 'p':
        p++;
        break;
      case 'q':
        q++;
        break;
      case 'r':
        r++;
        break;
      case 's':
        s++;
        break;
      case 't':
        t++;
        break;
      case 'u':
        u++;
        break;
      case 'v':
        v++;
        break;
      case 'w':
        w++;
        break;
      case 'x':
        x++;
        break;
      case 'y':
        y++;
        break;
      case 'z':
        z++;
        break;
      case 'A':
        A++;
        break;
      case 'B':
        B++;
        break;
      case 'C':
        C++;
        break;
      case 'D':
        D++;
        break;
      case 'E':
        E++;
        break;
      case 'F':
        F++;
        break;
      case 'G':
        G++;
        break;
      case 'H':
        H++;
        break;
      case 'I':
        I++;
        break;
      case 'J':
        J++;
        break;
      case 'K':
        K++;
        break;
      case 'L':
        L++;
        break;
      case 'M':
        M++;
        break;
      case 'N':
        N++;
        break;
      case 'O':
        O++;
        break;
      case 'P':
        P++;
        break;
      case 'Q':
        Q++;
        break;
      case 'R':
        R++;
        break;
      case 'S':
        S++;
        break;
      case 'T':
        T++;
        break;
      case 'U':
        U++;
        break;
      case 'V':
        V++;
        break;
      case 'W':
        W++;
        break;
      case 'X':
        X++;
        break;
      case 'Y':
        Y++;
        break;
      case 'Z':
        Z++;
        break;
      case '1':
        one++;
        break;
      case '2':
        two++;
        break;
      case '3':
        three++;
        break;
      case '4':
        four++;
        break;
      case '5':
        five++;
        break;
      case '6':
        six++;
        break;
      case '7':
        seven++;
        break;
      case '8':
        eight++;
        break;
      case '9':
        nine++;
        break;
      case '0':
        zero++;
        break;
      case '~':
        tilde++;
        break;
      case '`':
        backTick++;
        break;
      case '!':
        bang++;
        break;
      case '@':
        at++;
        break;
      case '#':
        hash++;
        break;
      case '$':
        doller++;
        break;
      case '%':
        percent++;
        break;
      case '^':
        carrot++;
        break;
      case '&':
        ampersna++;
        break;
      case '*':
        splat++;
        break;
      case '(':
        openPer++;
        break;
      case ')':
        closePer++;
        break;
      case '-':
        minus++;
        break;
      case '_':
        underscore++;
        break;
      case '+':
        plus++;
        break;
      case '=':
        equal++;
        break;
      case '[':
        openBra++;
        break;
      case '{':
        openCur++;
        break;
      case ']':
        closeBra++;
        break;
      case '}':
        closeCur++;
        break;
      case '\\':
        forwardSlash++;
        break;
      case '|':
        pipe++;
        break;
      case ':':
        colon++;
        break;
      case ';':
        semicolon++;
        break;
      case '\'':
        singleQuote++;
        break;
      case '"':
        doubleQuote++;
        break;
      case ',':
        comma++;
        break;
      case '<':
        greaterThan++;
        break;
      case '>':
        lessThan++;
        break;
      case '.':
        period++;
        break;
      case '/':
        backSlash++;
        break;
      case '?':
        questionMark++;
        break;
      case ' ':
        space++;
        break;
    }
  }
  fclose(fp);
  unsigned long allVars[95] = {a,  b,  c,  d,  e,  f,  g,  h,  i,  j,  k,  l,  m,  n,  o,  p,  q,  r,  s,  t,  u,  v,  w,  x,  y,  z,  A,  B,  C,  D,  E,  F,  G,  H,  I,  J,  K,  L,  M,  N,  O,  P,  Q,  R,  S,  T,  U,  V,  W,  X,  Y,  Z,  one, two, three, four, five, six, seven, eight, nine, zero, backTick,  tilde,  bang,  at,  hash,  doller,  percent,  carrot,  ampersna,  splat,  openPer,  closePer,  minus,  underscore,  equal,  plus,  openBra,  openCur,  closeBra,  closeCur,  forwardSlash,  pipe,  semicolon,  colon,  singleQuote,  doubleQuote,  comma,  greaterThan,  period,  lessThan,  backSlash,  questionMark,  space};
  printf("a: %i \(%f%%)\nb: %i \(%f%%)\nc: %i \(%f%%)\nd: %i \(%f%%)\ne: %i \(%f%%)\nf: %i \(%f%%)\ng: %i \(%f%%)\nh: %i \(%f%%)\ni: %i \(%f%%)\nj: %i \(%f%%)\nk: %i \(%f%%)\nl: %i \(%f%%)\nm: %i \(%f%%)\nn: %i \(%f%%)\no: %i \(%f%%)\np: %i \(%f%%)\nq: %i \(%f%%)\nr: %i \(%f%%)\ns: %i \(%f%%)\nt: %i \(%f%%)\nu: %i \(%f%%)\nv: %i \(%f%%)\nw: %i \(%f%%)\nx: %i \(%f%%)\ny: %i \(%f%%)\nz: %i \(%f%%)\nA: %i \(%f%%)\nB: %i \(%f%%)\nC: %i \(%f%%)\nD: %i \(%f%%)\nE: %i \(%f%%)\nF: %i \(%f%%)\nG: %i \(%f%%)\nH: %i \(%f%%)\nI: %i \(%f%%)\nJ: %i \(%f%%)\nK: %i \(%f%%)\nL: %i \(%f%%)\nM: %i \(%f%%)\nN: %i \(%f%%)\nO: %i \(%f%%)\nP: %i \(%f%%)\nQ: %i \(%f%%)\nR: %i \(%f%%)\nS: %i \(%f%%)\nT: %i \(%f%%)\nU: %i \(%f%%)\nV: %i \(%f%%)\nW: %i \(%f%%)\nX: %i \(%f%%)\nY: %i \(%f%%)\nZ: %i \(%f%%)\none: %i \(%f%%)\ntwo: %i \(%f%%)\nthree: %i \(%f%%)\nfour: %i \(%f%%)\nfive: %i \(%f%%)\nsix: %i \(%f%%)\nseven: %i \(%f%%)\neight: %i \(%f%%)\nnine: %i \(%f%%)\nzero: %i \(%f%%)\n`: %i \(%f%%)\n~: %i \(%f%%)\n!: %i \(%f%%)\n@: %i \(%f%%)\n#: %i \(%f%%)\n$: %i \(%f%%)\n%: %i \(%f%%)\n^: %i \(%f%%)\n&: %i \(%f%%)\n*: %i \(%f%%)\n(: %i \(%f%%)\n): %i \(%f%%)\n-: %i \(%f%%)\n_: %i \(%f%%)\n=: %i \(%f%%)\n+: %i \(%f%%)\n[: %i \(%f%%)\n{: %i \(%f%%)\n]: %i \(%f%%)\n}: %i \(%f%%)\n|: %i \(%f%%)\n\\: %i \(%f%%)\n;: %i \(%f%%)\n:: %i \(%f%%)\n': %i \(%f%%)\n\": %i \(%f%%)\n,: %i \(%f%%)\n<: %i \(%f%%)\n.: %i \(%f%%)\n>: %i \(%f%%)\n/: %i \(%f%%)\n?: %i \(%f%%)\nSpaces: %i \(%f%%)\nTotal number of characters: %i\n", a, (((float)a)/totalChars)*100,  b, (((float)b)/totalChars)*100,  c, (((float)c)/totalChars)*100,  d, (((float)d)/totalChars)*100,  e, (((float)e)/totalChars)*100,  f, (((float)f)/totalChars)*100,  g, (((float)g)/totalChars)*100,  h, (((float)h)/totalChars)*100,  i, (((float)i)/totalChars)*100,  j, (((float)j)/totalChars)*100,  k, (((float)k)/totalChars)*100,  l, (((float)l)/totalChars)*100,  m, (((float)m)/totalChars)*100,  n, (((float)n)/totalChars)*100,  o, (((float)o)/totalChars)*100,  p, (((float)p)/totalChars)*100,  q, (((float)q)/totalChars)*100,  r, (((float)r)/totalChars)*100,  s, (((float)s)/totalChars)*100,  t, (((float)t)/totalChars)*100,  u, (((float)u)/totalChars)*100,  v, (((float)v)/totalChars)*100,  w, (((float)w)/totalChars)*100,  x, (((float)x)/totalChars)*100,  y, (((float)y)/totalChars)*100,  z, (((float)z)/totalChars)*100,  A, (((float)A)/totalChars)*100,  B, (((float)B)/totalChars)*100,  C, (((float)C)/totalChars)*100,  D, (((float)D)/totalChars)*100,  E, (((float)E)/totalChars)*100,  F, (((float)F)/totalChars)*100,  G, (((float)G)/totalChars)*100,  H, (((float)H)/totalChars)*100,  I, (((float)I)/totalChars)*100,  J, (((float)J)/totalChars)*100,  K, (((float)K)/totalChars)*100,  L, (((float)L)/totalChars)*100,  M, (((float)M)/totalChars)*100,  N, (((float)N)/totalChars)*100,  O, (((float)O)/totalChars)*100,  P, (((float)P)/totalChars)*100,  Q, (((float)Q)/totalChars)*100,  R, (((float)R)/totalChars)*100,  S, (((float)S)/totalChars)*100,  T, (((float)T)/totalChars)*100,  U, (((float)U)/totalChars)*100,  V, (((float)V)/totalChars)*100,  W, (((float)W)/totalChars)*100,  X, (((float)X)/totalChars)*100,  Y, (((float)Y)/totalChars)*100,  Z, (((float)Z)/totalChars)*100,  one, (((float)one)/totalChars)*100,  two, (((float)two)/totalChars)*100,  three, (((float)three)/totalChars)*100,  four, (((float)four)/totalChars)*100,  five, (((float)five)/totalChars)*100,  six, (((float)six)/totalChars)*100,  seven, (((float)seven)/totalChars)*100,  eight, (((float)eight)/totalChars)*100,  nine, (((float)nine)/totalChars)*100,  zero, (((float)zero)/totalChars)*100,  backTick, (((float)backTick)/totalChars)*100,  tilde, (((float)tilde)/totalChars)*100,  bang, (((float)bang)/totalChars)*100,  at, (((float)at)/totalChars)*100,  hash, (((float)hash)/totalChars)*100,  doller, (((float)doller)/totalChars)*100,  percent, (((float)percent)/totalChars)*100,  carrot, (((float)carrot)/totalChars)*100,  ampersna, (((float)ampersna)/totalChars)*100,  splat, (((float)splat)/totalChars)*100,  openPer, (((float)openPer)/totalChars)*100,  closePer, (((float)closePer)/totalChars)*100,  minus, (((float)minus)/totalChars)*100,  underscore, (((float)underscore)/totalChars)*100,  equal, (((float)equal)/totalChars)*100,  plus, (((float)plus)/totalChars)*100,  openBra, (((float)openBra)/totalChars)*100,  openCur, (((float)openCur)/totalChars)*100,  closeBra, (((float)closeBra)/totalChars)*100,  closeCur, (((float)closeCur)/totalChars)*100,  forwardSlash, (((float)forwardSlash)/totalChars)*100,  pipe, (((float)pipe)/totalChars)*100,  semicolon, (((float)semicolon)/totalChars)*100,  colon, (((float)colon)/totalChars)*100,  singleQuote, (((float)singleQuote)/totalChars)*100,  doubleQuote, (((float)doubleQuote)/totalChars)*100,  comma, (((float)comma)/totalChars)*100,  greaterThan, (((float)greaterThan)/totalChars)*100,  period, (((float)period)/totalChars)*100,  lessThan, (((float)lessThan)/totalChars)*100,  backSlash, (((float)backSlash)/totalChars)*100,  questionMark, (((float)questionMark)/totalChars)*100,  space, (((float)space)/totalChars)*100, totalChars);
  return 0;
}
