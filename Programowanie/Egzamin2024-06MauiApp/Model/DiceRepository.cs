using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Egzamin2024_06MauiApp.Model
{
    internal struct DiceRepository
    {
        public int resoultOfThisDraw;
        public  int totalPoints;
        public ObservableCollection<int> cubes;
        public Command throw_cubes;
        public Command reset_points;
    }
}
