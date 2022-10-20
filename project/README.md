# Motion Planning and Decision Making for Autonomous Vehicles

In this project, the Behavior Planner and the Motion Planner are implemented which they work in unison to be able to:
* Avoid static objects (cars, bicycles and trucks) parked on the side of the road (but still invading the lane). The vehicle must avoid crashing with these vehicles by executing either a “nudge” or a “lane change” maneuver.
* Handle any type of intersection (3-way,  4-way intersections and roundabouts) by STOPPING in all of them (by default)
* Track the centerline on the traveling lane.

To accomplish this, the following functions are implement:

1) Behavioral planning logic using Finite State Machines (FSM) `behavior_planner_FSM.cpp` 
2) Static objects Collision checking `motion_planner.cpp`
3) Path and Trajectory generation using Cubic Spirals `velocity_profile_generator.cpp`
4) Best trajectory selection though a cost function evaluation `cost_functions.cpp`

After modifying the above scripts, its time to run the simulation.

For this project, Carla simulator was used through running the following commands in new terminals:
```
su - student
// Will say permission denied, ignore and continue 
cd /opt/carla-simulator/
SDL_VIDEODRIVER=offscreen ./CarlaUE4.sh -opengl
```
```
git clone https://github.com/pArtheum/MotionPlanning_-_DecisionMaking_AV.git
cd MotionPlanning_-_DecisionMaking_AV/project
./install-ubuntu.sh
cd starter_files/
cmake .
make
cd MotionPlanning_-_DecisionMaking_AV/project
./run_main.sh
```

### Obtained Results
In `planning_params.h`, the parameters were set as below:
- 
