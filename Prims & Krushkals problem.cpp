#include <iostream>
#include <cstring>
const int MAX_CITIES = 10;
using namespace std;
void displayAdjacencyMatrix(int adjacencyMatrix[][MAX_CITIES], int numCities) {
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < numCities; ++i) {
        for (int j = 0; j < numCities; ++j) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    char cities[MAX_CITIES][20];
    int adjacencyMatrix[MAX_CITIES][MAX_CITIES];

    int numCities;
    cout << "Enter the number of cities: ";
    cin >> numCities;
    cout << "Enter the names of cities:\n";
    for (int i = 0; i < numCities; ++i) {
        cin >> cities[i];
    }
    for (int i = 0; i < numCities; ++i) {
        for (int j = 0; j < numCities; ++j) {
            adjacencyMatrix[i][j] = 0;
        }
    }
    cout << "Enter the weights of edges (0 if no edge):\n";
    for (int i = 0; i < numCities; ++i) {
        for (int j = 0; j < numCities; ++j) {
            if (i != j) {
                int weight;
                cout << "Edge between " << cities[i] << " and " << cities[j] << ": ";
                cin >> weight;
                adjacencyMatrix[i][j] = weight;
            }
        }
    }
    displayAdjacencyMatrix(adjacencyMatrix, numCities);

    int selected[MAX_CITIES];
    memset(selected, false, sizeof(selected));
    selected[0] = true;
    int no_edge = 0;
    int x, y;

    while (no_edge < numCities - 1) {
        int min = INT_MAX; // Use INT_MAX instead of a hard-coded value like INF
        x = 0;
        y = 0;

        for (int i = 0; i < numCities; i++) {
            if (selected[i]) {
                for (int j = 0; j < numCities; j++) {
                    if (!selected[j] && adjacencyMatrix[i][j]) {
                        if (min > adjacencyMatrix[i][j]) {
                            min = adjacencyMatrix[i][j];
                            x = i;
                            y = j;
                        }
                    }
                }
            }
        }
        cout << cities[x] << " - " << cities[y] << " :  " << adjacencyMatrix[x][y] << endl;
        selected[y] = true;
        no_edge++;
    }
    return 0;
}
