using Microsoft.EntityFrameworkCore;
using People4DRepositoryClassLibrary.Models;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace People4DRepositiryClassLibrary
{


    public class PeopleRepository
    {
        private PeopleDBContext context;

        public PeopleRepository()
        {
            context = new PeopleDBContext();
        }

        //C - create

        public void AddNewPerson(string name, string surname, int age)
        {
            Person newPerson = new Person() { Name = name, Surname = surname, Age = age };

            context.People.Add(newPerson);

            context.SaveChanges();
        }

        //R - Read

        /*
        select *
        from people4d2026.people
        order by Name, Surname

         */

        public List<Person> GetAllPeople()
        {
            return context.People
                .AsNoTracking()
                .OrderBy(p => p.Name)
                .ThenBy(p => p.Surname)
                .ToList();
        }

        //U - update

        public void UpdateName(int id, string newName)
        {
            Person? person = context.People.FirstOrDefault(p => p.Id == id);

            if (person != null)
            {
                person.Name = newName;

                context.SaveChanges();
            }
        }

        //D - delete

        public void DeletePerson(int id)
        {
            Person? person = context.People.FirstOrDefault(p => p.Id == id);

            if (person != null)
            {
                context.People.Remove(person);
                context.SaveChanges();
            }

        }
        //Pobierz osoby o wieku wi�kszym ni� 30 lat.

        public List<Person> Age30Plus()
        {
            return context.People
                .AsNoTracking()
                .OrderBy(p => p.Name)
                .ThenBy(p => p.Surname)
                .Where(p => p.Age > 30)
                .ToList();
        }

       

        //Pobierz osoby, kt�rych nazwisko zaczyna si� na �K�.
        public List<Person> SurnameStartsWithK()
        {
            return context.People
                .AsNoTracking()
                .Where(p => p.Surname.StartsWith("K"))
                .ToList();
        }
        //Znajd� osoby z najmniejszym wiekiem.
        public Person? YoungestPeople()
        {
            return context.People
                .AsNoTracking()
                .OrderBy(p => p.Age)
                .FirstOrDefault();
        }

        //Policz, ile os�b jest w tabeli.
        public int HowManyPeople()
        {
            return context.People
             .Count();
        }
        //Zwr�� wszystkie unikalne imiona.
        public List<Person> UniqueNames()
        {
            return context.People
                .GroupBy(p => p.Name)
                .Select(n => n.First())
                .ToList();
        }
        //Zmie� nazwisko wszystkich os�b o nazwisku �Kowalski� na �Kowal�.
        public void UpdateKowal()
        {
            List<Person> people = context.People.Where(p => p.Surname == "Kowalski").ToList();

            if (people != null)
            {
                foreach (Person person in people)
                {
                    person.Surname = "Kowal";
                }


                context.SaveChanges();
            }
        }
        //Dodaj wszystkim osobom 1 rok(symulacja urodzin).
        public void BirthdayPartyForEveryone()
        {
            List<Person> people = context.People.Select(p => p).ToList();


            foreach (Person person in people)
                {
                    person.Age = person.Age + 1;
                }


                context.SaveChanges();
            
        }
        //Usu� wszystkich, kt�rzy maj� wi�cej ni� 80 lat.
        public void DeletePersonOlderThan80()
        {
            List<Person> people = context.People.Where(p => p.Age > 80).ToList();

            if (people != null)
            {
                foreach(Person person in people)
                {
                    context.People.Remove(person);
                }
                context.SaveChanges();
            }

        }
        // Znajd� najstarsz� osob� i zmie� jej nazwisko na �Najstarszy�.
        public Person? OldestPersonSurnameToOldest()
        {
            Person? person = context.People.OrderByDescending(p => p.Age).FirstOrDefault();

            person.Surname = "Najstarszy";
            context.SaveChanges();
            return person;

        }
  // Usu� osoby m�odsze ni� �rednia wieku.
  public void DeletePeopleYoungerThanAverage()
        {
            var averageAge = context.People.Average(p => p.Age);
            List<Person> people = context.People.Where(p => p.Age < averageAge).ToList();

            
                context.People.RemoveRange(people);
            context.SaveChanges();


        }
        //Zmie� imiona na wersj� �WIELKIMI LITERAMI�.
        public void AllNamesToUpperCase()
        {
            foreach (Person person in context.People)
            {
                person.Name = person.Name.ToUpper();
            }
            context.SaveChanges();
        }
    }
}