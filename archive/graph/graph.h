// グラフ
namespace pttgraph{

class Vertex{
public:
    int id = -1;
    Vertex *parent = NULL;

    Vertex(int id){
        this->id = id;
    }
};

class Edge{
    public:

};

class Graph{
public:
    int nVertex;
    int nEdge;
    Graph(int nVertex=0, int nEdge=0){
        this->nVertex = nVertex;
        this->nEdge = nEdge;
    }

};

class Tree : Graph{
public:
    Vertex *root = NULL;
    Tree(int nVertex){
        this->nVertex = nVertex;
        this->nEdge = nVertex-1;
    }
};

}