#include "../groc_db.h"
#include "../recipe.h"
#include <vector>

int main(int argc, char **argc) {

  std::vector<Ingredient> ingredients;
  
  Ingredient i { "Lettuce", "Produce", "Heads", 5);
 
  for (int i = 0; i < 10; ++i) {
    ingredients.push_back(i);
  }
  
  Recipe r("LotOLettuce", 3, &ingredients);
  add_to_db(&ingredients);

  return 0;
}
