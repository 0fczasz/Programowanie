using Egzamin2024_06MauiApp.Model;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Egzamin2024_06MauiApp
{
    internal class MainViewModel : BindableObject
    {

        public int ResoultOfThisDraw
        {
            get { return diceRepository.resoultOfThisDraw; }
            set { diceRepository.resoultOfThisDraw = value; OnPropertyChanged(); }
        }


        public int TotalPoints
        {
            get { return diceRepository.totalPoints; }
            set { diceRepository.totalPoints = value; OnPropertyChanged(); }
        }
        public int AmmountOfCubes { get; set; } = 5;

        public ObservableCollection<int> Cubes
        {
            get { return diceRepository.cubes; }
            set { diceRepository.cubes = value; }
        }

        private DiceService diceService = new DiceService();
        private DiceRepository diceRepository = new DiceRepository();
        public MainViewModel()
        {
            Cubes = diceService.getNewZerosCollection(AmmountOfCubes);

        }
        //private void Throw_Cubes(object sender, EventArgs e)
        //{
        //    DrawCubesNumbers();
        //    ResoultOfThisDraw = CountPointsOfDrawCubes(Cubes);
        //    TotalPoints += ResoultOfThisDraw;
        //}

        public Command Throw_Cubes
        {
            get
            {
                if (diceRepository.throw_cubes == null)
                    diceRepository.throw_cubes = new Command(
                        () =>
                        {
                            diceService.DrawCubesNumbers(AmmountOfCubes, Cubes);
                            ResoultOfThisDraw = diceService.CountPointsOfDrawCubes(Cubes);
                            TotalPoints += ResoultOfThisDraw;
                        }
                        );

                return diceRepository.throw_cubes;
            }
        }


        //private void Reset_Points(object sender, EventArgs e)
        //{
        //    SetAllCubesToZero(Cubes);
        //    ResoultOfThisDraw = 0;
        //    TotalPoints = 0;
        //}

        public Command Reset_Points
        {
            get
            {
                if (diceRepository.reset_points == null)
                    diceRepository.reset_points = new Command(
                        () =>
                        {
                            diceService.SetAllCubesToZero(Cubes);
                            ResoultOfThisDraw = 0;
                            TotalPoints = 0;
                        }
                        );
                return diceRepository.reset_points;
            }
        }
    }
}

