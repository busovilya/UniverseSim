#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <iostream>
#include <cstring>
#include "body.h"
#include "simulation_window.h"
#include "math.h"
#include "button.h"
#include "text_panel.h"

int main()
{ 
    SimulationWindow simualtion;
    simualtion.runSimulation();
    return 0;
}