void _init()
{
    void* v1;  // rax
    unsigned long long v2;  // rax

    v1 = 0;
    if (true)
        return;
    v2 = 0();
    return;
}

long long sub_400580()
{
    void* v0;  // [bp-0x8]

    v0 = 0;
    goto *((long long *)6299664);
}

long long _start()
{
    char v0;  // [bp+0x0], Other Possible Types: unsigned long
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rsi
    unsigned long v3;  // rax
    unsigned long long v4;  // rdx

    v2 = *((long long *)&v0);
    v0 = v3;
    __libc_start_main(main, v2, &v1, __libc_csu_init, __libc_csu_fini, v4); /* do not return */
}

// No decompilation output for function sub_40060a

long long _dl_relocate_static_pie()
{
    unsigned long v1;  // rax

    return v1;
}

extern unsigned long long __TMC_END__;

void deregister_tm_clones()
{
    unsigned long long v1;  // rax
    void* v2;  // rax

    v1 = &__TMC_END__;
    if (true)
        return;
    v2 = 0;
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

extern char completed.7698;

long long __do_global_dtors_aux()
{
    unsigned long v0;  // [bp-0x8]
    char v1;  // [bp+0x0]
    unsigned long v3;  // rax

    if (completed.7698)
        return v3;
    v0 = &v1;
    completed.7698 = 1;
    return (unsigned long long)deregister_tm_clones();
}

long long frame_dummy()
{
    return register_tm_clones();
}

extern unsigned long long HEADER;
extern unsigned long long stderr;
extern unsigned long long stdin;
extern unsigned long long stdout;

int main()
{
    char v0;  // [bp-0x118]
    void* v1;  // [bp-0x10]

    v1 = 0;
    setbuf(stdout, NULL);
    setbuf(stdin, NULL);
    setbuf(stderr, NULL);
    puts(HEADER);
    puts("My room is so cluttered...");
    puts("What do you see?");
    gets(&v0);
    if (v1 == 3735928559)
    {
        printf("code == 0x%llx: how did that happen??\n", 3735928559);
        puts("take a flag for your troubles");
        system("cat flag.txt");
        return 0;
    }
    printf("code == 0x%llx\n", (unsigned int)v1);
    printf("code != 0x%llx :(\n", 3735928559);
    return 0;
}

long long __libc_csu_init(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    void* v2;  // rbx

    if (false)
        return (unsigned long long)_init();
    v2 = 0;
    do
    {
        v2 += 1;
    } while (v2 != 1);
    return *((long long *)(6299152 + rbx<8> * 8))(a0, a1, a2);
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

