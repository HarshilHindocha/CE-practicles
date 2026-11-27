#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char p[1000], e[1000], u[2000], k[100], w[100], U[2000], D[2000], R[2000], c[2000];
    int i, j, n, m, el, kl, wl, pos, ch = 0, wd = 0, al = 0, dg = 0, sp = 0, ok = 1;
    const char *L = "--------------------------------------------\n";

    cout << "********************************************\nDOCUMENT TEXT ANALYZER\n";
    cout << "********************************************\nEnter Paragraph\n";
    cin.getline(p, 1000);
    for (n = 0; p[n]; n++);

    cout << L << "Text Analysis\n" << L;
    for (i = 0; i < n; i++) {
        ch++;
        if (isalpha(p[i])) al++;
        else if (isdigit(p[i])) dg++;
        else if (!isspace(p[i])) sp++;
        if (!isspace(p[i]) && (i == 0 || isspace(p[i - 1]))) wd++;
    }
    cout << "Characters : " << ch << "\nWords : " << wd << "\nAlphabets : " << al
         << "\nDigits : " << dg << "\nSpecial Characters : " << sp << "\n";

    cout << L << "String Extraction\n" << L << "First Word : ";
    i = 0;
    while (p[i] && !isalnum(p[i])) i++;
    while (isalnum(p[i])) cout << p[i++];
    cout << "\nLast Word : ";
    i = n - 1;
    while (i >= 0 && !isalnum(p[i])) i--;
    j = i;
    while (i >= 0 && isalnum(p[i])) i--;
    for (i++; i <= j; i++) cout << p[i];
    cout << "\nFirst Character : " << p[0] << "\nLast Character : " << (n ? p[n - 1] : ' ') << "\n";

    cout << L << "Concatenation\n" << L << "Enter Additional Sentence\n";
    cin.getline(e, 1000);
    for (i = 0; p[i]; i++) u[i] = p[i];
    u[i++] = '\n';
    for (el = 0; e[el]; el++) u[i++] = e[el];
    u[i] = 0;
    m = i;
    cout << "Updated Paragraph\n" << u << "\n";

    cout << L << "Pattern Matching\n" << L << "Enter Search Word : ";
    cin.getline(k, 100);
    for (kl = 0; k[kl]; kl++);
    pos = -1;
    for (i = 0; kl && pos < 0 && i + kl <= m; i++) {
        for (j = 0; j < kl && u[i + j] == k[j]; j++);
        if (j == kl) pos = i;
    }
    if (pos < 0) cout << "Keyword Not Found\n";
    else cout << "Keyword Found\nFirst Occurrence Position : " << pos + 1 << "\n";

    for (i = 0; i <= m; i++) {
        U[i] = u[i] >= 'a' && u[i] <= 'z' ? u[i] - 32 : u[i];
        D[i] = u[i] >= 'A' && u[i] <= 'Z' ? u[i] + 32 : u[i];
        R[i] = i < m ? u[m - 1 - i] : 0;
    }
    cout << L << "String Transformation\nUppercase\n" << U << "\n";
    cout << L << "Lowercase\n" << D << "\n";
    cout << L << "Reverse\n" << R << "\n";

    cout << L << "Palindrome Check\nEnter Word : ";
    cin.getline(w, 100);
    for (wl = 0; w[wl]; wl++);
    for (i = 0; i < wl / 2; i++)
        if (tolower(w[i]) != tolower(w[wl - 1 - i])) ok = 0;
    cout << "Result : " << (ok ? "Palindrome" : "Not a Palindrome") << "\n";

    cout << L << "Standard String Functions\n" << L;
    cout << "Length : " << strlen(u) << ((int)strlen(u) == m ? " (matches manual)" : " (differs)") << "\n";
    strcpy(c, u);
    cout << "String Copied Successfully\n";
    for (i = 0; c[i] && c[i] == u[i]; i++);
    cout << "Comparison Result : " << (!strcmp(c, u) && c[i] == u[i] ? "Equal" : "Not Equal") << "\n";
    strcpy(c, p);
    strcat(c, e);
    cout << "Concatenation : " << ((int)strlen(c) == n + el ? "Successful" : "Failed") << "\n";
    cout << "Substring Search : " << (strstr(u, k) && *k ? "Found" : "Not Found") << "\n";
    for (i = 0; u[i]; i++) c[i] = toupper(u[i]), R[i] = tolower(u[i]);
    c[i] = R[i] = 0;
    cout << "toupper() : " << (!strcmp(c, U) ? "Successful" : "Failed") << "\n";
    cout << "tolower() : " << (!strcmp(R, D) ? "Successful" : "Failed") << "\n" << L;
    return 0;
}
