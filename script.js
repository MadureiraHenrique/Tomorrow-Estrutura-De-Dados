// Obter referência ao botão
const actionButton = document.getElementById('action-button');
const qaSection = document.querySelector('.qa-section');

// Contador de perguntas
let questionCounter = 0;

// Função para adicionar classe de animação
function animateButton() {
    actionButton.classList.add('clicked');
    setTimeout(() => {
        actionButton.classList.remove('clicked');
    }, 300);
}

// Função para adicionar nova pergunta
function addNewQuestion() {
    questionCounter++;
    
    // Criar novo item de Q&A
    const newQAItem = document.createElement('div');
    newQAItem.className = 'qa-item';
    newQAItem.style.opacity = '0';
    newQAItem.style.transform = 'translateY(20px)';
    
    newQAItem.innerHTML = `
        <h3 class="question">Nova Pergunta ${questionCounter}</h3>
        <p class="answer">Esta é uma resposta de exemplo para a nova pergunta adicionada. Você pode editar este conteúdo conforme necessário.</p>
    `;
    
    // Inserir antes do container do botão
    const buttonContainer = document.querySelector('.button-container');
    qaSection.insertBefore(newQAItem, buttonContainer);
    
    // Animar entrada do novo item
    setTimeout(() => {
        newQAItem.style.transition = 'all 0.5s ease';
        newQAItem.style.opacity = '1';
        newQAItem.style.transform = 'translateY(0)';
    }, 10);
    
    // Scroll suave até o novo item
    setTimeout(() => {
        newQAItem.scrollIntoView({ behavior: 'smooth', block: 'center' });
    }, 100);
    
    // Mostrar mensagem de confirmação
    showNotification('Nova pergunta adicionada com sucesso!');
}

// Função para mostrar notificação
function showNotification(message) {
    // Verificar se já existe uma notificação
    const existingNotification = document.querySelector('.notification');
    if (existingNotification) {
        existingNotification.remove();
    }
    
    const notification = document.createElement('div');
    notification.className = 'notification';
    notification.textContent = message;
    notification.style.cssText = `
        position: fixed;
        top: 20px;
        right: 20px;
        background-color: #28a745;
        color: white;
        padding: 15px 25px;
        border-radius: 5px;
        box-shadow: 0 4px 12px rgba(0, 0, 0, 0.2);
        z-index: 1000;
        animation: slideIn 0.3s ease;
    `;
    
    document.body.appendChild(notification);
    
    // Remover notificação após 3 segundos
    setTimeout(() => {
        notification.style.animation = 'slideOut 0.3s ease';
        setTimeout(() => {
            notification.remove();
        }, 300);
    }, 3000);
}

// Adicionar animações CSS dinamicamente
const style = document.createElement('style');
style.textContent = `
    @keyframes slideIn {
        from {
            transform: translateX(400px);
            opacity: 0;
        }
        to {
            transform: translateX(0);
            opacity: 1;
        }
    }
    
    @keyframes slideOut {
        from {
            transform: translateX(0);
            opacity: 1;
        }
        to {
            transform: translateX(400px);
            opacity: 0;
        }
    }
`;
document.head.appendChild(style);

// Event listener para o botão
actionButton.addEventListener('click', () => {
    animateButton();
    addNewQuestion();
});

// Log de inicialização
console.log('Script de Q&A inicializado com sucesso!');
console.log('Botão pronto para adicionar novas perguntas.');
