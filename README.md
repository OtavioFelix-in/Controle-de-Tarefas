# Controle de Tarefas

## Sobre o Projeto
O projeto Controle de Tarefas tem como objetivo automatizar o gerenciamento de atividades do dia a dia. Por meio da integração entre Google Sheets, n8n, Inteligência Artificial e Gmail, o sistema identifica automaticamente novas tarefas cadastradas em uma planilha, analisa sua prioridade e envia uma notificação por e-mail ao usuário. Dessa forma, o acompanhamento de compromissos acadêmicos, pessoais e profissionais se torna mais ágil, organizado e eficiente.

**Projeto:** Controle de Tarefas  
**Problema que resolve:** Dificuldade em organizar, priorizar e acompanhar tarefas do dia a dia de forma prática e automatizada.

## Integrantes
| Nome | GitHub |
|------|--------|
| Otávio Felix da Silva | @OtavioFelix-in |
| Felipe Veríssimo Oliveira | @FelipeV21 |
| Leonardo Henrique dos Santos | @LeonardoHSantos1612 |


## Arquitetura

```mermaid
graph TD
A[Usuário - CLI] --> B[Cadastro de tarefas]
B --> C[Lista em memória ou banco]
C --> D[Exibir tarefas]
D --> E[Atualizar status]
