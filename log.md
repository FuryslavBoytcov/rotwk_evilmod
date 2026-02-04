✅❌

# Balance

## Units level up

`NextLevel.RequiredExperience` = `PreviousLevel.RequiredExperience` + `CurrentLevel.ExperienceAward` * (`CurrentLevel` + `HordeCount`)

# TODO Custom maps (playable, arnor ready)
- map mp south downs ✅ ❌
- map mp pelennor fields ✅ ❌
- map mp ithilien hills ✅ ❌

# TODO AI

- Надо бы из BrutalAIMultiPlayer_Bonus удалить Upgrade_SBrutalAIMultiPlayer 
потому это дается всему и вся (InheritableModule в Thing) и выходит что даем много лишних апдейтов в игре
=> попробовать через SpellBook (уже даем доп скидки там) давать Upgrade_SBrutalAIMultiPlayer 
и тогда надо протестить что после сноса крепости и ее восстановлением это не ломается и работает корректно.

# TODO
- У баз ИИ стоит MenFortress - чекнуть мб из-за этого они их не восстанавливают + чек мануал AI bases everyvery или что-то такое 
- Автохил у всех
- Множественный эффект лидерства
- У всех зданий slave охрана
- Заменить у назгулов taunt область на способность, которую можно купить, 
способность позволяет призывать призраков и при смерти призывающего назгула призраки умирают
- чек как выглядят DolgulduWight

# Goblins

# TODO
- Фикс доступности способностей шелоб
- Фикс хил шелоб: очень медленно лечится на 5+ уровне
- GoblinFighter
  - Horde
    - ✅ 5 horde members
    - ✅ command points
    - ✅ build cost & time
    - ❌ large group horde bonus
    - ✅ level up to 10 lvl
    - ❌ thread level
    - ❌ speed
    - ❌ ? health regen ?
    - ❌ vision range
    - ❌ AI combat members
    - ❌ AI Upgrades
    - ✅ if archer then KindOf -> delete PATH_THROUGH
  - Object
    - ✅ command points
    - ✅ display damage
    - ❌ thread level
    - ✅ health
    - ❌ ? health regen ?
    - ❌ speed
    - ✅ damage
    - ✅ damage upgrade
    - ✅ armor
    - ✅ armor upgrade
    - ❌ if archer then KindOf -> delete PATH_THROUGH

## Особенности

Основное направление геймплея должны быть постоянные набеги. Герои обладают большим range лидерства, которое дает эффект мародерства 50%
В Rush стадии с помощью героев войска получают эффект мародерства 50%
В 

## Horders

# Game mechanics

## Pillage
◯ Крадет деньги у противника при уроне по фильтру
```
Behavior = PillageModule ModuleTag_Test1
		PillageAmount				= WILDMAN_PILLAGE_AMOUNT
		NumDamageEventsPerPillage	= WILDMAN_PILLAGE_NUM_DAMAGES
		PillageFilter				= WILDMAN_PILLAGE_FILTER
	End
```

## Steal Money
◯ Крадет деньги у противника при уроне по фильтру
```
StealMoneyNugget
        AmountStolenPerAttack    = CREATE_A_HERO_STEAL_MONEY_AMOUNT_L1
        SpecialObjectFilter        = CREATE_A_HERO_STEAL_MONEY_OBJECT_FILTER
        RequiredUpgradeNames    = Upgrade_CreateAHeroStealMoney_Level1
        ForbiddenUpgradeNames    = Upgrade_CreateAHeroStealMoney_Level2 Upgrade_CreateAHeroStealMoney_Level3
    End
```