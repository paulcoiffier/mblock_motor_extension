# Extension MBlock contrôle de moteur
Extension pour le contrôle de moteurs avec la shield DK Electronics Arduino pour l'IDE MBlock
<br />
# Installation
Téléchargez l'extension en cliquant <a href="https://github.com/paulcoiffier/mblock_motor_extension/raw/master/dist/Controleur%20moteur.zip">ICI</a>
<br />
Pour l'installer, ouvrez le gestionnaire d'extensions MBlock (choisir "zip file" en tant que type de fichier à ouvrir) puis sélectionnez le fichier téléchargé.

# Utilisation
Pour utiliser l'extension, glissez le bloc "Contrôle moteur" dans votre cinématique et renseignez-y les paramètres : 
- <strong>Moteur</strong> : numéro de l'entrée moteur de la carte (de 1 à 4)
- <strong>état</strong> : 0 = arrêté, 1 = démarré
- <strong>sens</strong> : 0 (avant) ou 1 (arrière)
- <strong>vitesse</strong> : vitesse de rotation du moteur, de 0 à 255.
<br />
    
# Exemple
<br />
![alt tag](https://github.com/paulcoiffier/mblock_motor_extension/blob/master/screenshot.png)
