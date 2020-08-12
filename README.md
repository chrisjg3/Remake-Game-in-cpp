# Remake-Game

## Purpose
Just to note, this isn't a project a necessarily will complete.  I wanted to have a fun way to practice smart pointers, linked lists, (data structures, algortihms, best practices, etc.) while I have a few weeks between classes.  I am also at the same time learning rust, so I may attempt to include some things in rust just to get used to using dynamically allocated memory in that language.

## Upcoming Plans / Structure:
This is for organizing my thoughts:

So I am thinking of sketching out these ideas for each class:

#### Entity (like Player)
Attributes:
- Inventory: with a Max size, thinking about making this an array of pointers or a linked list.
- Skills: abstract base class of  only health,then maybe add indepent skills, all just unsigned shorts.  Mybe make it an array with each position being one?
- Abilities: Thinking of this like attributes that effect outcomes of events in game, like a Charisma attribute meaning more likely to succeed in bartering, not sure. Maybe this will be only in derived player class.
- Some Bool showing if it can be talked to or if it is an animal or something

#### Items
- isPortable: bool that lets player pick it up or not
- Owner: pointer set to entity owner, doesn't allow usage unless it points to player, or maybe counts as stealing to change idk

#### Map & Locations (seperate classes?)
- I am thinking maybe all locations are objects inside one map object that is used to navigate, or maybe every entity has a location attribute which is a pointer set equal to a location.  Not sure yet



