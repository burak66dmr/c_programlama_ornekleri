ex00:
    Bir pointer int'e parametre olarak alan ve "66" değerini o int'ye ayarlayan bir işlev oluşturun.
    
    İşte nasıl prototiplenmesi gerektiği:
    void ft_ft(int *nbr);

ex01:
    Bir parametre olarak bir pointerdan pointera pointera pointera pointera pointera pointerdan pointera pointera pointera
    pointera int alan ve "66" değerini bu int'ye ayarlayan bir işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    void ft_ultimate_ft(int *********nbr);

ex02:
    Adresleri parametre olarak girilen iki tam sayının değerini değiştiren bir işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    void ft_swap(int *a, int *b);

ex03:
    Bu işlev a parametrelerini b'ye böler ve sonucu int olarak div ile pointer ederek saklar. Ayrıca, mod tarafından pointer edilen int olarak a
    ile b'nin bölünmesinin geri kalanını da saklar.

    İşte nasıl prototiplenmesi gerektiği:
    void ft_div_mod(int a, int b, int *div, int *mod);

ex04:
    Bu fonksiyon a parametrelerini b'ye böler. Bu bölünmenin sonucu, bir tarafından pointer edilen int'de saklanır. Bölünmenin geri kalanı, b ile
    pointer edilen int'de saklanır.

    İşte nasıl prototiplenmesi gerektiği:
    void ft_ultimate_div_mod(int *a, int *b);

ex05:
    Standart çıktıda bir karakter dizisi görüntüleyen bir işlev oluşturun.
    Kullanılabilir fonksiyon: write()

    İşte nasıl prototiplenmesi gerektiği:
    void ft_putstr(char *str);

ex06:
    Bir dizedeki karakter sayısını sayan ve döndüren bir işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    int ft_strlen(char *str);

ex07:
    Belirli bir tamsayı dizisini tersine çeviren bir işlev oluşturun (ilk son gider, vb.).
    Argümanlar, int'ye bir pointer ve dizideki int sayısıdır.

    İşte nasıl prototiplenmesi gerektiği:
    void ft_rev_int_tab(int *tab, int size);

ex08:
    Bir tamsayı dizisini artan düzene göre sıralayan bir işlev oluşturun. Argümanlar, int olarak bir pointer ve dizideki int sayısıdır.

    İşte nasıl prototiplenmesi gerektiği:
    void ft_sort_int_tab(int *tab, int size);
