int distMoney(int money, int children) {
    if (money < children) return -1;
    
    money -= children;
    int eights = money / 7;
    int remainder = money % 7;
    
    if (eights > children) return children - 1;
    if (eights == children && remainder != 0) {
        return children - 1;
    }
    if (eights == children - 1 && remainder == 3) {
        eights--;
    }

    return eights;
}
