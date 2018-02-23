//
//  main.cpp
//  struct
//
//  Created by Jason on 18/06/2017.
//  Copyright © 2017 Jason. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

void print(struct Books* book);

struct Books
{
    char  title[50];
    char  author[50];
    char  subject[100];
    int   book_id;
} book;

struct Person
{
    string name;
    int age;
    char gender;
};

int main(int argc, const char * argv[]) {
    // C++11 features, ignore 'struct' keyword
    Books book;
    
    strcpy(book.title, "CSS 教程");
    strcpy(book.author, "Runoob");
    strcpy(book.subject, "前端技术");
    book.book_id = 12346;
    
    print(&book);

    Person p1 = {
        "YHSPY",
        24,
        1
    };

    Person p2 {
        "STARY",
        25,
        0
    };

    cout << p1.name << "  " << p1.age << endl;
}

void print(struct Books* book) {
    cout << "标题: " << book->title <<endl;
    cout << "作者: " << book->author <<endl;
    cout << "类目: " << book->subject <<endl;
    cout << "ID: " << book->book_id <<endl;
}
