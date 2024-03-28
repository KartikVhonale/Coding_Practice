int _init(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned long long v1, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9, unsigned long a10)
{
    char v0;  // [bp+0x0]

    if (true)
        return;
    0(a0, a1, a2, a3, a4, a5, *((long long *)&v0), v1, a6, a7, a8, a9);
    return;
}

long long sub_401020()
{
    void* v0;  // [bp-0x8]

    v0 = 0;
    goto *((long long *)4210576);
}

long long sub_401030()
{
    void* v0;  // [bp-0x8]

    v0 = 0;
    return sub_401020();
}

long long sub_401040()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 1;
    return sub_401020();
}

long long sub_401050()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 2;
    return sub_401020();
}

long long sub_401060()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 3;
    return sub_401020();
}

long long sub_401070()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 4;
    return sub_401020();
}

long long sub_401080()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 5;
    return sub_401020();
}

long long sub_401090()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 6;
    return sub_401020();
}

long long sub_4010a0()
{
    unsigned long long v0;  // [bp-0x8]

    v0 = 7;
    return sub_401020();
}

extern unsigned long long __libc_csu_fini;
extern unsigned long long __libc_csu_init;
extern unsigned long long main;

long long _start()
{
    unsigned long v0;  // [bp+0x0], Other Possible Types: char
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rsi
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx

    v2 = *((long long *)&v0);
    v0 = v3;
    __libc_start_main(&main, v2, &v1, &__libc_csu_init, &__libc_csu_fini, v4); /* do not return */
}

// No decompilation output for function sub_40116e

extern char __TMC_END__;

int deregister_tm_clones()
{
    if (true)
        return;
    if (!(false))
        return;
}

long long register_tm_clones()
{
    if (true)
        return 0;
    if (!(false))
        return 0;
}

extern char completed.8055;

long long __do_global_dtors_aux()
{
    unsigned long v0;  // [bp-0x8]
    char v1;  // [bp+0x0]
    unsigned long v3;  // rax

    if (completed.8055)
        return v3;
    v0 = &v1;
    if (true)
    {
        completed.8055 = 1;
        return deregister_tm_clones();
    }
    __cxa_finalize();
    completed.8055 = 1;
    return deregister_tm_clones();
}

long long frame_dummy()
{
    return register_tm_clones();
}

extern unsigned long long stdin;
extern unsigned long long stdout;

int main(unsigned int a0, unsigned long a1)
{
    unsigned long v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x4c]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]

    v1 = a0;
    v0 = a1;
    setvbuf(stdout, NULL, 0x2, 0x0);
    v2 = &v3;
    puts("Give me a key!");
    fgets(&v3, 0x1e, stdin);
    if (!encrypt(v2))
    {
        puts("That's not it!");
        return 1;
    }
    print_flag();
    return 0;
}

extern unsigned long long secret;

int encrypt(char *a0)
{
    unsigned int v0;  // [bp-0x20]
    unsigned int v1;  // [bp-0x1c]

    v0 = 0;
    while (true)
    {
        if (v0 < strlen(secret))
        {
            v1 = (unsigned int)((a0[v0] * 8 + 19) % 61) + 65;
            if (v1 != *((char *)(v0 + secret)))
                return 0;
            v0 += 1;
        }
        else
        {
            return 1;
        }
    }
}

int print_flag()
{
    void* v0;  // [bp-0x120]
    char v1;  // [bp-0x118]

    v0 = fopen("flag.txt", "r");
    if (!v0)
    {
        puts("Too bad you can only run this exploit on the server...");
        exit(0x0); /* do not return */
    }
    fgets(&v1, 0x100, v0);
    printf("%s", (unsigned int)&v1);
    return;
}

long long __libc_csu_init(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    char v3;  // [bp-0x10]
    char v4;  // [bp-0x8]
    char v5;  // [bp+0x0]
    unsigned long long v9;  // rdi
    void* v12;  // rbx
    unsigned long long v13;  // rax

    if (false)
        return _init(v9, a1, a2, a3, a4, a5, *((long long *)&v0), &v5, *((long long *)&v1), *((long long *)&v2), *((long long *)&v3), *((long long *)&v4));
    v12 = 0;
    do
    {
        v13 = *((long long *)(4210048 + rbx<8> * 8))(v9, a1, a2);
        v12 += 1;
    } while (v12 != 1);
    return v13;
}

long long __libc_csu_fini()
{
    unsigned long v1;  // rax

    return v1;
}

long long _fini()
{
    unsigned long v1;  // rax

    return v1;
}

