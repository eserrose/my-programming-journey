#include <stdio.h>
#include <string.h>

int main() {

        char cmd[100];  // to hold the command.
        char to[] = "emirhaneser@hotmail.com"; // email id of the recepient.
        char body[] = "I rock";    // email body.
        char tempFile[100];     // name of tempfile.

        strcpy(tempFile,tmpnam("sendmail")); // generate temp file name.

        FILE *fp = fopen(tempFile,"w"); // open it for writing.
        fprintf(fp,"%s\n",body);        // write body to it.
        fclose(fp);             // close it.
    system ("mail -s test esergul.fwoe@gmail.com < sendmail");
        //sprintf(cmd,"sendmail %s < %s",to,tempFile); // prepare command.
        //system(cmd);     // execute it.

        return 0;
}
