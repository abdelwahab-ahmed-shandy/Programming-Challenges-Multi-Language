/*

Problem_5 >> Write a program to ask the user to enter his/her : Age , Driver license and Has Recommendation! 
Then print "Hired if his/her" age is grater than 21 and s/he has a driver license , otherwise print "Rejected" Or Hire him/her without conditions!  */

namespace PracticalExample
{
    internal class Program
    {
        public class InfoPerson
        {
            public InfoPerson(string name = "Null", int age = 0, bool driverLicense = false, bool hasRecommendation = false)
            {
                Name = name;
                Age = age;
                DriverLicense = driverLicense;
                HasRecommendation = hasRecommendation;
            }

            public string Name { get; set; }
            public int Age { get; set; }
            public bool DriverLicense { get; set; }
            public bool HasRecommendation { get; set; }
        }
        public static InfoPerson ReadInfoPerson()
        {
            InfoPerson person = new InfoPerson();
            Console.WriteLine("Write a program to ask the user to enter his/her : Age , Driver license and Has Recommendation! Then print Hired if his/her age is grater than 21 and s/he has a driver license , otherwise print Rejected Or Hire him/her without conditions! \n");
            Console.Write("Enter Your Name : ");
            person.Name = Console.ReadLine();

            Console.Write("How Old Are You : ");
            person.Age = int.Parse(Console.ReadLine());

            Console.Write("Do you have a driving license (Yes Enter true , No enter false) : ");
            person.DriverLicense = bool.Parse(Console.ReadLine());

            Console.Write("Do you Have Recommendition (Yes Enter true , No enter false) : ");
            person.HasRecommendation = bool.Parse(Console.ReadLine());
            return person;
        }

        public static bool ChackInfoPerson(InfoPerson person)
        {
            if (person.HasRecommendation == true)
                return true;
            else if (person.Age > 21 && person.DriverLicense)
                return true;
            return false;
        }

        public static void PrintAccepetORNot(InfoPerson person)
        {
            if (ChackInfoPerson(person))
                Console.WriteLine("\nHello , Hired");
            else
                Console.WriteLine("\nSorry , Rejected");
        }

        static void Main(string[] args)
        {
            PrintAccepetORNot(ReadInfoPerson());
        }
    }
}