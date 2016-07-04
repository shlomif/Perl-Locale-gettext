#include <libintl.h>
#include <stdio.h>

const char const * domain = "foo";

int main(int argc, char * argv[])
{
    bind_textdomain_codeset(domain, "UTF-8");
    bindtextdomain(domain, "test_data");
    printf("msg=%s\n", dgettext(domain, "No problem"));

    return 0;
}
