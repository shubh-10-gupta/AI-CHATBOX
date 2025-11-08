                 ┌─────────────────────────┐
                 │        ChatBot          │
                 ├─────────────────────────┤
                 │ - responses : map<string,string> │
                 │ - userInput : string              │
                 ├─────────────────────────┤
                 │ + ChatBot()                        │
                 │ + toLowerCase(str : string) : string│
                 │ + loadResponses()                  │
                 │ + startChat()                      │
                 │ + getResponse(input : string) : string │
                 └─────────────────────────┘


Object Interaction:-

User  ─────► ChatBot ─────► responses (knowledge base)
  ▲
  │ input/output
  │
Console
