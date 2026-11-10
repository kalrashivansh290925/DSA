#include <iostream>
using namespace std;

void fun(int **p)
{ 
    **p = **p+10; // changes n
    *p = *p+10; // changes address p1
}

int main() {
    int n = 10; 
    int *p1; //single pointer
    p1 = &n;
    int **p2 = &p1; // double  pointer
    int ***p3 = &p2; // triple pointer
    int ****p4 = &p3;

    // cout<<n<<endl;
    // cout<<&n<<endl;
    // cout<<p1<<endl;
    // cout<<&p1<<endl;
    // cout<<p2<<endl;
    // cout<<&p2<<endl;
    // cout<<p3<<endl;
    
    // Value modification
    // *p1 = *p1+5;
    // **p2 = **p2+5;
    // ***p3 = ***p3+5;
    
    // cout<<n<<endl;
    // cout<<n<<" "<<p1<<endl;
    // fun(p1);
    // cout<<n<<" "<<p1<<endl;

    // cout<<n<<" "<<p1<<" "<<p2<<endl;
    // fun(p2);
    // cout<<n<<" "<<p1<<" "<<p2<<endl;
    // cout<<&n; //No change in the address of num
    


    // QUESTION

    char c[] = "GATE2024";
    char *ptr = c;
    cout<<ptr+ptr[3]-ptr[1];
    return 0;
}

//



/*REVISION NOTE CHAT GPT 
## C++ pointers: quick revision note

```cpp
int n = 10;
int* p = &n;
```

- `int* p` declares `p` as a pointer to an `int`. The spaces around `*` don’t matter: `int* p` and `int *p` mean the same thing.
- `&n` means “the address of `n`.” So `p` stores `n`’s address.
- `p` is the address; `*p` accesses the value at that address. Here, `*p` is `10`.
- You can use `*p` to change `n`: `*p = 20;` sets `n` to `20`.
- In a declaration, `*` says “pointer to.” In an expression, `*p` means “value pointed to by `p`.”
- Initialize pointers before using them. Use `nullptr` when a pointer intentionally points to nothing, and never dereference a null or invalid pointer.
- In `int* p1, p2;`, only `p1` is a pointer; `p2` is a regular `int`. Declaring one variable per line avoids confusion.
- Arrays use zero-based indexes: `ary[2]` is the third element. `&ary[2]` is its address.
- `cout` treats a `char*` as text. To print the address of a character, cast it to `const void*`:

```cpp
cout << static_cast<const void*>(&ary[2]) << endl;
```*/