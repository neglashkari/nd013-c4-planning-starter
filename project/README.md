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
- Number of paths (goals) = 7, i.e., `P_NUM_PATHS`
- Number of points in the spiral = 20, i.e., `P_NUM_POINTS_IN_SPIRAL`

The obtained results are shown below which clearly demonstrates collision detection and collision avoidance is successfully performed, and that the ego car steers away from the imminent collisions.

![carla_1](https://user-images.githubusercontent.com/109758200/197116241-719527a8-3796-441a-bf69-843c5b72d79e.png)

![carla_2](https://user-images.githubusercontent.com/109758200/197116258-2a4c8fbc-f020-4665-8ed4-21955cb24ef1.png)

![carla_3](https://user-images.githubusercontent.com/109758200/197116271-244f113b-4b1f-4f2e-8a31-b428b8f2960d.png)

![carla_4](https://user-images.githubusercontent.com/109758200/197116283-ff58e77f-ef90-4198-94f3-8a490369df99.png)



