#include <iostream>
#include <vector>

using namespace std;

struct Process {
    string name;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

vector<Process> processes;
int timeQuantum;

void executeProcess(Process& process) {
    if (process.burstTime > timeQuantum) {
        process.burstTime -= timeQuantum;
    } else {
        process.burstTime = 0;
    }
}

void scheduleProcesses() {
    int currentTime = 0;
    int completedProcesses = 0;

    while (completedProcesses < processes.size()) {
        for (int i = 0; i < processes.size(); i++) {
            if (processes[i].arrivalTime <= currentTime && processes[i].burstTime > 0) {
                executeProcess(processes[i]);
                currentTime += timeQuantum;

                if (processes[i].burstTime == 0) {
                    processes[i].turnaroundTime = currentTime - processes[i].arrivalTime;
                    processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;
                    completedProcesses++;
                }
            }
        }
    }
}

void printGanttChart() {
    for (Process process : processes) {
        cout << process.name << ": ";

        for (int i = 0; i < process.turnaroundTime; i++) {
            if (i < process.arrivalTime) {
                cout << " ";
            } else if (i < process.arrivalTime + process.burstTime) {
                cout << ".";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }
}

void printProcessStatistics() {
    cout << "Process Statistics" << endl;
    cout << "------------------" << endl;
    cout << "Process | Arrival Time | Burst Time | Waiting Time | Turnaround Time" << endl;

    for (Process process : processes) {
        cout << process.name << " | " << process.arrivalTime << " | " << process.burstTime << " | " << process.waitingTime << " | " << process.turnaroundTime << endl;
    }

    cout << endl;
}

int main() {
    // Initialize processes
    Process p1 = {"P1", 0, 5};
    Process p2 = {"P2", 1, 3};
    Process p3 = {"P3", 2, 4};
    Process p4 = {"P4", 4, 2};

    processes.push_back(p1);
    processes.push_back(p2);
    processes.push_back(p3);
    processes.push_back(p4);

    timeQuantum = 2;

    scheduleProcesses();
    printGanttChart();
    printProcessStatistics();

    return 0;
}