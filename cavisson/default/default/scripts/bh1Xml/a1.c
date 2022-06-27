#include <stdio.h>

main()
{
FILE *fp;
char buf[1024];
int num_devices, num_bind_entries, num;

	fp = fopen ("test.txt", "w");
	fprintf (fp, "%10d %10d\n", 123, 123);
	fprintf (fp, "This is a test\n");
	fprintf (fp, "This is a test2\n");
	fprintf (fp, "This is a test3\n");

	rewind(fp);
	fprintf (fp, "%10d %10d\n", 99345601, 723456);
	fclose(fp);

	fp = fopen ("test.txt", "r");
	fgets (buf, 1024, fp);
	printf ("buf is (%s)", buf);
if ((num=sscanf (buf, "%d %d", &num_devices, &num_bind_entries)) != 2) {
        printf ("User-Dev-IP bindings sys/bindings.dat Bad format %d\n", num);
        exit(1);
    }

    printf ("num dev=%d num_bindings=%d\n", num_devices, num_bind_entries);

}
