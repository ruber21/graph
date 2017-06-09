#ifndef GRAPH_H
#define GRAPH_H

#include <string>

struct SNode
{
        unsigned int id;
        Arist *arist;
        Node *nextNode;
};
typedef struct SNode Node;

struct SArist
{
        float value;
        Node *origin;
        Node *destin;
        Arist *nextArist;
};
typedef struct SArist Arist;

class Graph
{
private:
Node *firstNode;
public:
Graph()
{
        this->firstNode = NULL;
};

bool ExistsNode(unsigned int nodeId, Node *currentNode = this->firstNode)
{
        if(currentNode == NULL)
                return false;
        else if(currentNode->id == nodeId)
                return true;
        else
                return ExistsNode(nodeId,currentNode->extNode);
};

void AddNode(unsigned int nodeId, Node *currentNode = this->firstNode)
{
        if(nodeId > currentNode->id )
        {
                Node *newNode;
                newNode = &(new Node);
                newNode->id = nodeId;
                newNode->nextNode = NULL;
                newNode->arist = NULL;
                currentNode->nextNode = newNode;
        }
        else
        {
                AddNode(nodeId);
        }
};

void AddArist(float value, unsigned int originId, unsigned int destinId)
{

};

};



#endif
