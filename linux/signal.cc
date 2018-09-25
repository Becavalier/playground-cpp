#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

#define MAXLINE 255

using namespace std;

static bool alive = true;

void sig_int(int signo) {
    cout << "\ninterrupt." << endl;
    alive = false;
}

int main (int argc, char **argv) {
    char buf[MAXLINE];
    pid_t pid;
    int status;

    if (signal(SIGINT, sig_int) == SIG_ERR)
        cerr << "signal error" << endl;

    cout << "% ";
    while (alive && fgets(buf, MAXLINE, stdin) != nullptr) {
        if (buf[strlen(buf) - 1] == '\n') {
            buf[strlen(buf) - 1] = 0;
        }

        if (string(buf) == "exit") 
            return 1;

        if ((pid = fork()) < 0) {
            cerr << "fork error" << endl;
        } else if(pid == 0) {
            cout << "child process: " << getpid() << endl;
            execlp(buf, buf, 0);
            exit(127);
        }

        cout << "main process (alive): " << getpid() << endl;
        if ((pid = waitpid(pid, &status, 0)) < 0) {
            cerr << "waitpid error" << endl;
        }
        cout << "% ";
    }

    return 0;
}