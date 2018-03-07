ch = getchar();
if (isdigit(ch))
    type = "digit";
else
    type = "non-digit";
printf("'%c' is a %s\n", ch, type);


-----

ch = getchar();
type = isdigit(ch) ? "digit" : "non-digit"

printf("'%c' is a %s\n", ch, type);



if (a){
    return b
} else {
    return c
}
a ? b : c