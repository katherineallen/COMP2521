char *numToDay(int n)
{


    assert(0 <= n && n <= 6);


    char *day;

    switch(n) {
        case 0: day = "Sun"; break;
        case 1: day = "Mon"; break;
        ...
        case 5: day = "Fri"; break;
        default: day = "Sat"; break;

    }

    if (n == 0) {
        day = "Sun";
    }
    else if (n == 1) {
        day = "Mon";
    }
    else if (n == 2) {
        day = "Tue";
    }
    else if (n == 3) {
        day = "Wed";
    }
    else if (n == 4) {
        day = "Thu";
    }
    else if (n == 5) {
        day = "Fri";
    }
    else if (n == 6) {
        day = "Sat";
    }
    return day;
}
