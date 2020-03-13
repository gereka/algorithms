#include "stralg.h"

int min3(int x, int y, int z)
{
  if(x <= y && x <= z)
    return x;
  if(y <= x && y <= z)
    return y;
  if(z <= x && z <= y)
    return z;
}

size_t LevDist(const std::string& str1, const std::string& str2)
{
  int m = str1.size();
  int n = str2.size();
  int dist[m+1][n+1];
  //TODO: setting the boundries to 0 takes up linear space
  //and linear time. Can create class for dist such that
  //nonextant or zero indexes return 0;
  for (int i=0; i<=m; i++)
    dist[i][0]=i;
  for (int i=1; i<=n; i++)
    dist[0][i]=i;

  for (int i=1; i<=m; i++)
    for (int j=1; j<=n; j++)
      dist[i][j] = min3(dist[i-1][j-1] + (str1[i-1] != str2[j-1]),
		       dist[i-1][j] + 1,
		       dist[i][j-1] + 1);
    
  return dist[m][n];
}
