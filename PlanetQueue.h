#ifndef PLANETQUEUE_H
#define PLANETQUEUE_H

#include "PlanetIterator.h"
#include "Node.h"

/** @brief PlanetQueue class
 */

class PlanetQueue {
    friend class PlanetIterator;

    public:
    /** Default constructor
     */
        PlanetQueue();
    /** default destructor
     */
        ~PlanetQueue();
    /** Is the queue empty
     * @return bool
     */
        bool isEmpty();
    /** Start of the queue
     * @return PlanetIterator
     */
        PlanetIterator begin();
    /** End of the queue
     * @return PlanetIterator
     */
        PlanetIterator end();
    /** Enqueue planet into queue
     * @param p - Planet to enqueue
     */
        void enqueue(Planet* p);
    /** Dequeue a planet
     */
        Planet* dequeue();

    private:
        Node* head;/**<Head of the queue*/
};

#endif