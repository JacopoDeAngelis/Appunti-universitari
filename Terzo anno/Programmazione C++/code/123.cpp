enum class Warning : int { green, yellow, orange, red }; // sizeof(Warning)==sizeof(int)

// If we considered that too wasteful of space, we could instead use a char

enum class Warning : char { green, yellow, orange, red }; // sizeof(Warning)==1


static_cast<int>(Warning::green)==0
static_cast<int>(Warning::yellow)==1
static_cast<int>(Warning::orange)==2
static_cast<int>(Warning::red)==3
