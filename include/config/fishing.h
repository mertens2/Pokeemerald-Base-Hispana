#ifndef GUARD_CONFIG_FISHING_H
#define GUARD_CONFIG_FISHING_H

// Pesca
#define I_FISHING_BITE_ODDS         GEN_LATEST  // En Gen 1 y Gen 2, la Caña vieja tiene 100% de posibilidades de que pique un Pokémon, Caña buena un 66%, y la Super caña un 50%. En Gen 3, todas tienen un 50%. De Gen 4 en adelante, la Caña vieja tiene un 25%, la Caña buena un 50% y la Super caña un 75%.
#define I_FISHING_MINIGAME          GEN_5       // Cada generación utiliza una variación de la mecánica de pesca una vez que el Pokémon ha sido enganchado.
#define I_FISHING_ENVIRONMENT       GEN_LATEST  // En Gen 3, el terreno de batalla cuando combates contra un Pokémon pescado depende del tile donde esté el jugador. A partir de Gen 4, el terreno depende del tile donde es pescado el Pokémon (lo que suele ser terreno de agua).
#define I_FISHING_STICKY_BOOST      GEN_LATEST  // En Gen 3, un Pokémon con Ventosas o Viscosidad como primer miembro del equipo aumenta las posibilidades de que pique un Pokémon un 35%. De Gen 4 en adelante, dobla las posibilidades.
#define I_FISHING_FOLLOWER_BOOST    FALSE       // En HGSS, las posibilidades de que pique un Pokémon aumentan con la felicidad del Pokémon que te sigue.
#define I_FISHING_CHAIN             TRUE        // Introducido en XY, enganchar al mismo Pokémon repetidamente aumenta las probabilidades de que ese Pokémon sea shiny. NOTA: Esta implementación es una aproximación de la característica real, ya que XY no ha sido exhaustivamente documentado ni datamineado.
#define I_FISHING_PROXIMITY         FALSE       // Introducido en XY, pescar lejos de otras personas en áreas cerradas aumenta las probabilidades de que un Pokémon sea enganchado. NOTA: Esta implementación es una aproximación de la característica real, ya que XY no ha sido exhaustivamente documentado ni datamineado.
#define I_FISHING_TIME_OF_DAY_BOOST FALSE      // In XY, bite chance is boosted during morning and evening

#endif // GUARD_CONFIG_FISHING_H
