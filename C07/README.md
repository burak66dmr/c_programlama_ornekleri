ex00:
    src pointer ını dest e kopyala

    İşte nasıl prototiplenmesi gerektiği:
    char *ft_strcpy(char *dest, char *src);

ex01:
    src pointer ını n adedini dest e kopyala

    İşte nasıl prototiplenmesi gerektiği:
    char *ft_strncpy(char *dest, char *src, unsigned int n);

ex02:
    Parametre olarak verilen dize yalnızca alfabetik karakterler içeriyorsa 1, başka bir karakter içeriyorsa 0 döndüren bir işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    int ft_str_is_alpha(char *str);

ex03:
    Parametre olarak verilen dize yalnızca rakam içeriyorsa 1, başka bir karakter içeriyorsa 0 döndüren bir işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    int ft_str_is_numeric(char *str);

ex04:
    Parametre olarak verilen dize yalnızca küçük harf alfabetik karakterler içeriyorsa 1, başka bir karakter içeriyorsa 0 döndüren bir
    işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    int ft_str_is_lowercase(char *str);

ex05:
    Parametre olarak verilen dize yalnızca büyük harfli alfabetik karakterler içeriyorsa 1, başka bir karakter içeriyorsa 0 döndüren bir
    işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    int ft_str_is_uppercase(char *str);

ex06:
    Parametre olarak verilen dize yalnızca yazdırılabilir karakterler içeriyorsa 1, başka bir karakter içeriyorsa 0 döndüren bir işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    int ft_str_is_printable(char *str);

ex07:
    Her harfi büyük harfe dönüştüren bir işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    char *ft_strupcase(char *str);

ex08:
    Her harfi küçük harfe dönüştüren bir işlev oluşturun.

    İşte nasıl prototiplenmesi gerektiği:
    char *ft_strlowcase(char *str);

ex09:
    Her kelimenin ilk harfini büyük harfle yazan ve diğer tüm harfleri küçük harfe dönüştüren bir işlev oluşturun. • Bir kelime, alfasayısal
    karakterlerden oluşan bir dizedir.

    girdi:
    salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un

    çıktı:
    Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un

    İşte nasıl prototiplenmesi gerektiği:
    unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);
    
ex10:


ex11:
    Ekranda bir karakter dizisi görüntüleyen bir işlev oluşturun. Bu dize yazdırılabilir olmayan karakterler varsa, bunlardan önce "backslash"
    gelen onaltılık (küçük harf) şeklinde görüntülenmeleri gerekir.

    girdi:
    Coucou\ntu vas bien ?

    çıktı:
    Coucou\0atu vas bien ?

    İşte nasıl prototiplenmesi gerektiği:
    void ft_putstr_non_printable(char *str);

ex12:
    