document.addEventListener('DOMContentLoaded', function() {
  // Retrieve existing clients from localStorage or start with empty array
  let clients = JSON.parse(localStorage.getItem('clients')) || [];
  // Determine next ID (one higher than current max ID, or 1 if none)
  let nextId = clients.length > 0
    ? Math.max(...clients.map(c => c.id)) + 1
    : 1;

  // Function to render the clients table
  function renderTable() {
    const tbody = document.querySelector('#clientsTable tbody');
    tbody.innerHTML = '';
    clients.forEach(client => {
      const row = document.createElement('tr');
      row.innerHTML = `
        <td>${client.id}</td>
        <td>${client.name}</td>
        <td>${client.email}</td>
        <td>${client.phone || ''}</td>
        <td><button class="delete-btn" data-id="${client.id}">Delete</button></td>`;
      tbody.appendChild(row);
    });
    // Attach delete handlers for each delete button
    document.querySelectorAll('.delete-btn').forEach(btn => {
      btn.addEventListener('click', function() {
        const id = parseInt(this.getAttribute('data-id'));
        deleteClient(id);
      });
    });
  }

  // Delete a client by ID and update storage
  function deleteClient(id) {
    clients = clients.filter(c => c.id !== id);
    localStorage.setItem('clients', JSON.stringify(clients));
    renderTable();
  }

  // Filter table rows based on search input
  function filterTable() {
    const term = document.getElementById('searchInput').value.toLowerCase();
    const rows = document.querySelectorAll('#clientsTable tbody tr');
    rows.forEach(row => {
      const cells = row.getElementsByTagName('td');
      const name = cells[1].textContent.toLowerCase();
      const email = cells[2].textContent.toLowerCase();
      const phone = cells[3].textContent.toLowerCase();
      const match = name.includes(term) || email.includes(term) || phone.includes(term);
      row.style.display = match ? '' : 'none';
    });
  }

  // Modal handling
  const modal = document.getElementById('clientModal');
  const btnOpen = document.getElementById('addClientBtn');
  const spanClose = document.querySelector('#clientModal .close');

  btnOpen.onclick = function() {
    modal.style.display = 'block';
  };
  spanClose.onclick = function() {
    modal.style.display = 'none';
  };
  window.onclick = function(event) {
    if (event.target == modal) {
      modal.style.display = 'none';
    }
  };

  // Handle form submission to add a new client
  const form = document.getElementById('clientForm');
  form.addEventListener('submit', function(e) {
    e.preventDefault();
    const name = document.getElementById('nameInput').value.trim();
    const email = document.getElementById('emailInput').value.trim();
    const phone = document.getElementById('phoneInput').value.trim();
    if (name && email) {
      // Create new client object and add to array
      const client = { id: nextId++, name, email, phone };
      clients.push(client);
      localStorage.setItem('clients', JSON.stringify(clients));
      renderTable();
      form.reset();
      modal.style.display = 'none';
    }
  });

  // Attach input listener for live search
  document.getElementById('searchInput').addEventListener('input', filterTable);

  // Initial render of table from storage
  renderTable();
});
