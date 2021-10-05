countSort(V:vector[0..n-1] of 0..m-1) ret V2:vector[0..n-1] of 0..m-1
Var: C:vector[0..m-1] of Nat // Zero initialized

for(int i = 0; i < n; i++)
C[V[i]] = C[V[i]] + 1;// C[i] contains how many i there are in V
for i  2 to m (int i = 1; i < m;i++)
C[i] = C[i] + C[i-1]; // C[i] contains where to put i
for i  n to 1(int i = n - 1; i > 0; i--)
{
V2[C[V[i]]] = V[i];
C[V[i]] = C[V[i]] - 1;
}
