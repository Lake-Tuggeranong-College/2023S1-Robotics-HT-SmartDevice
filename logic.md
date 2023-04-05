# Programming Logic

> For each behaviour, create the mermaid flowchart. Start each flowchart with a Heading naming the functionality. Delete this comment prior to submission.

## Logic 1

```mermaid
flowchart TD
    Start([Doorbell])
    getButtonStatus(Get Button Status)
    checkButton{has button been pressed}
    soundDoorbell(Play Sound)
    finish([End])
   
   
   
    Start-->getButtonStatus-->checkButton
    checkButton-->|Yes| soundDoorbell
    checkButton-->|No| finish
    soundDoorbell-->finish

```

## logic 2
```mermaid
flowchart TD
    Start([Event])
    


start-->logEvent
```