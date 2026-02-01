# Zbiórka 
**Limit pamięci**: 64MB <br> 
 
Pałac króla Bitolandii jest w ruinie, a kasa państwa świeci pustkami! Obywatele Bitolandii 
postanowili przeprowadzić zbiórkę pieniędzy na ratowanie cennego zabytku. W centrum 
stolicy, Bitogrodu, ustawiono wielką skrzynię, do której każdy może wrzucić datek. Zbiórka 
trwa już jakiś czas. Nikt jednak nie wie, jaka kwota mogła się dotychczas uzbierać. Gdyby tyko 
społeczny komitet ratowania zabytku miał pewność, że zebrane środki są wystarczające, 
zakończono by kwestę i przystąpiono do prac. W Bitolandii używa się tylko monet, a każda ma 
określoną wagę i nominał. Czy znając wagę zebranych monet możliwe jest określenie 
minimalnej kwoty, jaką do tej pory zebrano? 

### Wejście 
Pierwszy wiersz zawiera jedną liczbę całkowitą c – ciężar zgromadzonych pieniędzy, nie 
więcej niż 10000. W drugiej linii znajduje się jedna liczba całkowita n – liczba różnych monet 
używanych w danej walucie (1 ≤ n ≤ 1000). W kolejnych liniach znajdują się opisy monet 
zawierające po dwie liczby całkowite, nominał m oraz wagę w (1 ≤ m ≤ 50000, 1 ≤ w ≤ 10000). 

### Wyjście 
Wypisz minimalną ilość pieniędzy, które można osiągnąć za pomocą monet z danej masy 
całkowitej. Jeśli waga nie może być osiągnięta, należy wypisać komunikat "NIEMOZLIWE". 

### Przykład
| Wejście | Wyjście |
|---------|---------|
| 100 2 1 10 20 5 | 10 |
| 100 2 10 1 20 5 | 400 |
| 5 2 2 2 4 4 | NIEMOZLIWE | 