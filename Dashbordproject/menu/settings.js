// settings.js
document.addEventListener('DOMContentLoaded', function() {
    // Elements
    const body = document.body;
    const themeToggle = document.getElementById('themeToggle');
    const themeModeLabel = document.getElementById('themeModeLabel');
    const languageSelect = document.getElementById('languageSelect');
    const nameInput = document.getElementById('nameInput');
    const emailInput = document.getElementById('emailInput');
    const pictureInput = document.getElementById('pictureInput');
    const picturePreview = document.getElementById('picturePreview');
    const saveButton = document.getElementById('saveButton');
    
    // Translation strings
    const translations = {
        en: {
            title: "Settings",
            themeLabel: "Theme",
            light: "Light Mode",
            dark: "Dark Mode",
            language: "Language",
            profileTitle: "Profile Information",
            name: "Name",
            email: "Email",
            profilePicture: "Profile Picture",
            save: "Save Profile"
        },
        ar: {
            title: "الإعدادات",
            themeLabel: "المظهر",
            light: "الوضع الفاتح",
            dark: "الوضع الداكن",
            language: "اللغة",
            profileTitle: "معلومات الملف الشخصي",
            name: "الاسم",
            email: "البريد الإلكتروني",
            profilePicture: "صورة الملف الشخصي",
            save: "حفظ الملف الشخصي"
        }
    };
    
    // Apply theme function
    function applyTheme(theme) {
        if (theme === 'dark') {
            body.classList.add('dark-mode');
            body.classList.remove('light-mode');
            themeToggle.checked = true;
        } else {
            body.classList.add('light-mode');
            body.classList.remove('dark-mode');
            themeToggle.checked = false;
        }
        // Update theme label text
        const currentLang = languageSelect.value || localStorage.getItem('language') || 'en';
        themeModeLabel.textContent = (theme === 'dark') ? translations[currentLang].dark : translations[currentLang].light;
    }
    
    // Apply language function
    function applyLanguage(lang) {
        document.getElementById('settingsTitle').textContent = translations[lang].title;
        document.getElementById('themeLabel').textContent = translations[lang].themeLabel;
        document.getElementById('languageLabel').textContent = translations[lang].language;
        document.getElementById('profileTitle').textContent = translations[lang].profileTitle;
        document.getElementById('nameLabel').textContent = translations[lang].name;
        document.getElementById('emailLabel').textContent = translations[lang].email;
        document.getElementById('pictureLabel').textContent = translations[lang].profilePicture;
        saveButton.textContent = translations[lang].save;
        // Set text direction and html lang attribute
        document.documentElement.dir = (lang === 'ar') ? 'rtl' : 'ltr';
        document.documentElement.lang = lang;
        // Update theme label text for current theme
        const theme = localStorage.getItem('theme') || 'dark';
        themeModeLabel.textContent = (theme === 'dark') ? translations[lang].dark : translations[lang].light;
        // Set select value
        languageSelect.value = lang;
    }
    
    // Load saved theme and language
    const savedTheme = localStorage.getItem('theme') || 'dark';
    applyTheme(savedTheme);
    const savedLanguage = localStorage.getItem('language') || 'en';
    applyLanguage(savedLanguage);
    
    // Load saved profile info
    const savedName = localStorage.getItem('userName');
    const savedEmail = localStorage.getItem('userEmail');
    const savedImage = localStorage.getItem('userImage');

    if (savedName) nameInput.value = savedName;
    if (savedEmail) emailInput.value = savedEmail;
    if (savedImage) picturePreview.src = savedImage;
    
    // Event: Theme toggle changed
    themeToggle.addEventListener('change', function() {
        const newTheme = themeToggle.checked ? 'dark' : 'light';
        localStorage.setItem('theme', newTheme);
        applyTheme(newTheme);
    });
    
    // Event: Language selection changed
    languageSelect.addEventListener('change', function() {
        const newLang = languageSelect.value;
        localStorage.setItem('language', newLang);
        applyLanguage(newLang);
    });
    
    // Event: Save profile
    saveButton.addEventListener('click', function() {
        localStorage.setItem('userName', nameInput.value);
        localStorage.setItem('userEmail', emailInput.value);
        // Image is saved on selection
        alert(translations[languageSelect.value].save + "d!");
    });
    
    // Event: Profile picture selection
    pictureInput.addEventListener('change', function() {
        const file = pictureInput.files[0];
        if (file) {
            const reader = new FileReader();
            reader.onload = function(e) {
                picturePreview.src = e.target.result;
                localStorage.setItem('userImage', e.target.result);
            };
            reader.readAsDataURL(file);
        }
    });
});
