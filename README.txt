To generate an input graph :
	1. Compile inpGraphGenerate.cpp with 'g++ inpGraphGenerate.cpp -o generateInp'
	2. This will print the graph in a particular format on stdout
	3. It will ask for two inputs. One is the total number of nodes in the graph and the other is the maximum out-degree of the graph.

The form of the graphical input is: 
Number of nodes(n), followd by 2n lines
In the first line, the number of neighbours of i and 
in the second, the node number of these neighbours.

To run the bfs_sequential file :
	1. Compile bfs_sequential.c with 'gcc bfs_sequential.c -o sequentialBFS'
	2. Give it input generated from the input graph generator. 

To run the bfs_parallel file :
	1. Compile bfs_sequential.c with 'gcc -fopenmp bfs_parallel.c -o parallelBFS'
	2. Give it input generated from the input graph generator. 
	3. To change the number of threads, one can go to the file and change the NUM_THREADS macro accordingly.

To run the dfs_sequential file :
	1. Compile dfs_sequential.c with 'gcc dfs_sequential.c -o sequentialDFS'
	2. Give it input generated from the input graph generator. 

To run the runner.sh, simple run './runner.sh'
	1. We will have to change the variables l and filename with every run. filename has the input graph and changing l will ensure that your output goes to different files.