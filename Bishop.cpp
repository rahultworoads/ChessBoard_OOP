/* 
 * File:   Bishop.cpp
 * Author:      Paul Senatillaka , psenatil@cs.uml.edu
 *              UMass Lowell Computer Science
 * Class:       91.201 Computing III
 * Assignment:  7 - Implementing an Object-Oriented Game
 *
 * Created on May 8, 2010, 2:34 PM
 */

#include "Bishop.h"

/**@summary Constructor
 * @color Color of this new piece
 * @pos Position of this new piece
 */
Bishop::Bishop(Color color, Position pos) {
    this->type = "B";
    this->color = color;
    this->pos = pos;
}

/**@summary Default Destructor
 */
Bishop::~Bishop() {

}

/**@summary Validates that a possible move abides by this pieces move logic
 * @param moteToPos - Position of where this piece will move
 * @return bool - Success or Fail
 */
bool Bishop::ValidateMove(Position moveToPos) {

    return false;
}


