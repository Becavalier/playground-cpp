#include <unistd.h>
#include <fcntl.h>
#include <string>
#include <iostream>

using namespace std;

int main (int argc, char **argv) {
    cout << STDIN_FILENO << endl;
    cout << STDOUT_FILENO << endl;
    cout << STDERR_FILENO << endl;
    cout << "max open count: " << OPEN_MAX - 1 << endl;

    auto fd = open("./file.txt", O_RDWR | O_CREAT);

    const char* content = string("Apple").c_str();
    cout << sizeof(*content)/sizeof(char) << endl;
    ssize_t count = write(fd, content, sizeof(content)/sizeof(char));
    cout << "write: " << count << endl;

    off_t currpos = lseek(fd, 0, SEEK_CUR);
    cout << currpos << endl;

    close(fd);
    return 0;
}