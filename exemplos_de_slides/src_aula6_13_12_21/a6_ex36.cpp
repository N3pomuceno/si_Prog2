// Quando estiver lidando com agregados grandes, é importante evitar cópias.

struct Gigante {
    char muitos[9999];
};


void func1 (struct Gigante g) {
    // Cópia de conteúdo de g (lento) - C/C++
}


void func2 (struct Gigante* g) {
    // Cópia de endereço de g (rápido) - C/C++
}


void func3 (struct Gigante g) {
    // Referência/alias lvalue g (rápido) - C++
}


void func4 (struct Gigante g) {
    // Referência rvalue g (rápido) - C++ (Desde 2011)
}
