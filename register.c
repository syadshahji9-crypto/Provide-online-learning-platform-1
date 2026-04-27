#include <stdio.h>
#include <stdlib.h>

int main() {
    char *data;
    data = getenv("QUERY_STRING");

    printf("Content-Type: text/html\n\n");
    printf("<html><body>");
    printf("<h2>Login Successful</h2>");
    printf("<p>Data Received: %s</p>", data);
    printf("</body></html>");

    return 0;
}
