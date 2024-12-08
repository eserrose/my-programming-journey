#include <stdio.h>
#include <string.h>

int main() {

        char cmd[100];  // to hold the command.
        char to[] = "emirhaneser@hotmail.com"; // email id of the recepient.
        char body[] = "I rock";    // email body.

        FILE *fp = fopen("Mail.txt","w"); // open it for writing.
        fprintf(fp,"%s\n",body);        // write body to it.
        fclose(fp);             // close it.
    system("mail -s test esergul.fwoe@gmail.com < Mail.txt");
        //sprintf(cmd,"sendmail %s < %s",to,tempFile); // prepare command.
        //system(cmd);     // execute it.

        return 0;
}
