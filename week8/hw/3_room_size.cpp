#include<iostream>
#include<algorithm>
#include <queue>
#include <vector>
using namespace std;

struct Cord{
  int x, y;
};

int main(int argc, char const *argv[])
{
  int m, n;
  cin >> m >> n;

  string arr[n];

  for(int i =0; i < n; i++){
    for(int j =0; j < m; j++){
      char tmp;
      cin >> tmp;
      arr[i] += tmp;
    }
  }

  bool visited[100][100] = {false, };
  queue<Cord> q;

  int room_size = 0;
  vector<int> rooms;

  int dx[4] = {-1, 1, 0, 0};
  int dy[4] = {0, 0, -1, 1};

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(visited[i][j] == false){
        Cord cord;
        cord.x = i;
        cord.y = j;
        if(arr[i][j] == '.'){
          q.push(cord);
          visited[i][j] = true;
          room_size = 1;
        } else {
          continue;
        }

        while(!q.empty()){
          Cord cur;
          cur = q.front();
          q.pop();

          for(int i = 0; i < 4; i++){
            int nx, ny;
            nx = cur.x + dx[i];
            ny = cur.y + dy[i];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m ){
              continue;
            } else {
              if(visited[nx][ny] == false && arr[nx][ny] == '.'){
                visited[nx][ny] = true;
                room_size++;
                Cord next;
                next.x = nx;
                next.y = ny;
                q.push(next);
              }
            }


          }
          
        }
      
        rooms.push_back(room_size);
      }
    }
  }

  cout << rooms.size() << endl;
  sort(rooms.begin(), rooms.end(), greater<int>());

  for(int i =0; i < rooms.size(); i++){
    cout << rooms[i] << " ";
  }
}
