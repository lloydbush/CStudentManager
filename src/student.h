typedef struct{
    char last_name[50];
    char first_name[50];
    char sex; // f,m,d
    int age;
    char email[50];
    char phone[50];
} Student;

typedef struct{
    Student* list;
    size_t len;
} Students;

