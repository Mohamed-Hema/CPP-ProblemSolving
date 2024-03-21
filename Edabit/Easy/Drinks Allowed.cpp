bool shouldServeDrinks(int age, bool onBreak)
{
    return age >= 18 && onBreak == false ? true : false;
}
