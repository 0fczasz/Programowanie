using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Egzamin2024_06MauiApp.Model
{
    internal class DiceService
    {
        internal ObservableCollection<int> getNewZerosCollection(int ammountOfCubes)
        {
            ObservableCollection<int> cubes = new ObservableCollection<int>();
            for (int i = 0; i < 5; i++)
            {
                cubes.Add(0);
            }
            return cubes;
        }
        public void DrawCubesNumbers(int ammountOfCubes, ObservableCollection<int> cubes)
        {
            Random random = new Random();
            for (int i = 0; i < cubes.Count; i++)
            {
                cubes[i] = random.Next(1, 7);
            }
        }

        public void SetAllCubesToZero(ObservableCollection<int> cubes)
        {
            for (int i = 0; i < cubes.Count; i++)
                cubes[i] = 0;
        }

        public int CountPointsOfDrawCubes(ObservableCollection<int> cubes)
        {
            int points = 0;
            var groups = cubes.GroupBy(x => x);

            foreach (var group in groups)
            {
                if (group.Count() >= 2)
                {
                    points += group.Key * group.Count();
                }
            }
            return points;
        }
    }
}


