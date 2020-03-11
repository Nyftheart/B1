
var age;// déclaration  variable age

age = prompt("Entrez age.");//attente de reponce de l'utilisateur 

if(age < 1) //si l'age est en desous de 0
{
    alert("Error");// affiche un pop up error
}

else if(age >=1 && age < 17) // si l'age est comprit entre  1 et 17
{
    alert("Mineur");// affiche un pop up mineur
}

else if(age >= 18 && age < 49) // si l'age est comprit entre 18 et 49
{
    alert('Mageur');// affiche un pop up mageur
}

else if(age>=50 && age <59)// si l'age est comprit entre 50 et 59
{
    alert("Senior");// affiche un pop up senior
}

else if (age>=60 && age < 120)// si l'age est comprit entre 60 et 120
{
    alert("Retraite.");// affiche un pop up retraité
}

else if (age > 121) // si l'age est au dessus de 120
{
    alert("Error");// affiche un pop up error
}

else   // si l'age ne comprent pas quel que chose de valable
{
    alert("Error");// affiche un pop up error
}